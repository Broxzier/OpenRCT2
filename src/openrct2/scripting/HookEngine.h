#pragma region Copyright (c) 2014-2018 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#pragma once

#include "../common.h"
#include <memory>
#include <string>
#include <vector>
#include <dukglue/dukglue.h>

namespace OpenRCT2::Scripting
{
    class Plugin;

    enum class HOOK_TYPE
    {
        INTERVAL_TICK,
        INTERVAL_DAY,
        COUNT,
    };
    constexpr size_t NUM_HOOK_TYPES = static_cast<size_t>(HOOK_TYPE::COUNT);

    struct Hook
    {
        uint32 Cookie;
        const Plugin * Owner;
        DukValue Function;

        Hook();
        Hook(uint32 cookie, const Plugin& owner, const DukValue &function)
            : Cookie(cookie),
              Owner(&owner),
              Function(function)
        {
        }
    };

    struct HookList
    {
        HOOK_TYPE Type;
        std::vector<Hook> Hooks;
    };

    class HookEngine
    {
    private:
        std::vector<HookList> _hookMap;
        size_t _numHooks{};
        uint32_t _nextCookie = 1;

    public:
        HookEngine();
        uint32 Subscribe(HOOK_TYPE type, const Plugin& plugin, const DukValue &function);
        void Unsubscribe(HOOK_TYPE type, uint32 cookie);
        void Call(HOOK_TYPE type);

    private:
        HookList& GetHookList(HOOK_TYPE type);
    };
}
