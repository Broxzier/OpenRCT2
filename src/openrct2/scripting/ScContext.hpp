#pragma once

#include <dukglue/dukglue.h>
#include "ScDisposable.hpp"
#include <cstdio>
#include <memory>

namespace OpenRCT2::Scripting
{
    class ScContext
    {
    public:
        std::shared_ptr<ScDisposable> subscribe(const std::string &hook, const DukValue &callback)
        {
            return std::make_shared<ScDisposable>(
                []()
                {
                    std::printf("dispose called\n");
                });
        }

        static void Register(duk_context * ctx)
        {
            dukglue_register_method(ctx, &ScContext::subscribe, "subscribe");
        }
    };
}
