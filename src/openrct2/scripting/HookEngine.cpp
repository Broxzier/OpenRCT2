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

#include "HookEngine.h"

using namespace OpenRCT2::Scripting;

HookEngine::HookEngine()
{
    _hookMap.resize(NUM_HOOK_TYPES);
    for (size_t i = 0; i < NUM_HOOK_TYPES; i++)
    {
        _hookMap[i].Type = static_cast<HOOK_TYPE>(i);
    }
}

uint32 HookEngine::Subscribe(HOOK_TYPE type, const Plugin& plugin, const DukValue &function)
{
    auto hookList = GetHookList(type);
    auto cookie = _nextCookie++;
    Hook hook(cookie, plugin, function);
    hookList.Hooks.push_back(hook);
    return cookie;
}

void HookEngine::Unsubscribe(HOOK_TYPE type, uint32 cookie)
{
    auto hookList = GetHookList(type);
    for (size_t i = 0; i < hookList.Hooks.size(); i++)
    {
        if (hookList.Hooks[i].Cookie == cookie)
        {
            hookList.Hooks.erase(hookList.Hooks.begin() + i);
            break;
        }
    }

}

void HookEngine::Call(HOOK_TYPE type)
{
    auto hookList = GetHookList(type);
    for (auto& hook : hookList.Hooks)
    {
        const auto& function = hook.Function;
        function.push();
        duk_pcall(function.context(), 0);
        duk_pop(function.context());
    }
}

HookList& HookEngine::GetHookList(HOOK_TYPE type)
{
    auto index = static_cast<size_t>(type);
    return _hookMap[index];
}
