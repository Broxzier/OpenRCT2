/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#include "TestData.h"

#include <gtest/gtest.h>
#include <openrct2/core/File.h>
#include <openrct2/core/Path.hpp>
#include <openrct2/drawing/ImageImporter.h>
#include <openrct2/interface/Screenshot.h>
#include <openrct2/world/Climate.h>
#include <string_view>

using namespace OpenRCT2::Drawing;

class ImageImporterTests : public testing::Test
{
public:
    std::string OutputImagePath = "ImageImporterTestsOutput.png";

    static std::string GetImagePath(const std::string_view& name)
    {
        return Path::Combine(TestData::GetBasePath(), "images", name.data());
    }

    static uint32_t GetHash(void* buffer, size_t bufferLength)
    {
        uint32_t hash = 27;
        for (size_t i = 0; i < bufferLength; i++)
        {
            hash = (13 * hash) + ((uint8_t*)buffer)[i];
        }
        return hash;
    }

    void TearDown() override
    {
        File::Delete(OutputImagePath);
    }
};

TEST_F(ImageImporterTests, Import_Logo)
{
    auto logoPath = GetImagePath("logo.png");

    ImageImporter importer;
    auto image = Imaging::ReadFromFile(logoPath, IMAGE_FORMAT::PNG_32);
    auto result = importer.Import(image, 3, 5, ImageImporter::IMPORT_FLAGS::RLE);

    ASSERT_EQ(result.Buffer, result.Element.offset);
    ASSERT_EQ(128, result.Element.width);
    ASSERT_EQ(128, result.Element.height);
    ASSERT_EQ(3, result.Element.x_offset);
    ASSERT_EQ(5, result.Element.y_offset);
    ASSERT_EQ(0, result.Element.zoomed_offset);

    // Check to ensure RLE data doesn't change unexpectedly.
    // Update expected hash if change is expected.
    ASSERT_NE(nullptr, result.Buffer);
    auto hash = GetHash(result.Buffer, result.BufferLength);
    ASSERT_EQ(0xCEF27C7D, hash);
    free(result.Buffer);
}

TEST_F(ImageImporterTests, Screenshot)
{
    auto parkPath = TestData::GetParkPath("bpb.sv6");
    auto pngPath = OutputImagePath;

    // Dump screenshot
    ScreenshotOptions options;
    const char* argv[] = { parkPath.c_str(), pngPath.c_str(), "800", "600" };
    auto exitCode = cmdline_for_screenshot(argv, std::size(argv), &options);
    ASSERT_EQ(1, exitCode);

    // Assert saved image
    auto image = Imaging::ReadFromFile(pngPath, IMAGE_FORMAT::PNG_32);
    auto hash = GetHash(image.Pixels.data(), image.Pixels.size());
    ASSERT_EQ(0xDBA7A237, hash);
}

TEST_F(ImageImporterTests, GiantScreenshot)
{
    auto parkPath = TestData::GetParkPath("bpb.sv6");
    auto pngPath = OutputImagePath;

    // Dump screenshot
    ScreenshotOptions options;
    options.weather = 1 + WEATHER_SUNNY;
    const char* argv[] = { parkPath.c_str(), pngPath.c_str(), "giant", "0", "0" };
    auto exitCode = cmdline_for_screenshot(argv, std::size(argv), &options);
    ASSERT_EQ(1, exitCode);

    // Assert saved image
    auto image = Imaging::ReadFromFile(pngPath, IMAGE_FORMAT::PNG_32);
    auto hash = GetHash(image.Pixels.data(), image.Pixels.size());
    ASSERT_EQ(0xAA740379, hash);
}
