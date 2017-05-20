#pragma region Copyright (c) 2014-2017 OpenRCT2 Developers
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

#include "../common.h"
#include "../input.h"
#include "../interface/themes.h"
#include "../interface/viewport.h"
#include "../interface/widget.h"
#include "../interface/window.h"
#include "../localisation/string_ids.h"
#include "../sprites.h"
#include "../world/map.h"

#define WW 400
#define WH 200

static void window_map_modifier_mouseup(rct_window *w, rct_widgetindex widgetIndex);
static void window_map_modifier_update(rct_window *w);
static void window_map_modifier_tool_down(rct_window *w, rct_widgetindex widgetIndex, sint32 x, sint32 y);
static void window_map_modifier_tool_drag(rct_window *w, rct_widgetindex widgetIndex, sint32 x, sint32 y);
static void window_map_modifier_invalidate(rct_window *w);
static void window_map_modifier_paint(rct_window *w, rct_drawpixelinfo *dpi);

static rct_window_event_list window_map_object_manupulator_events = {
	NULL,
	window_map_modifier_mouseup,
	NULL,
	NULL, // mousedown
	NULL,
	NULL,
	window_map_modifier_update,
	NULL,
	NULL,
	NULL,
	window_map_modifier_tool_down,
	window_map_modifier_tool_drag,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	window_map_modifier_invalidate,
	window_map_modifier_paint,
	NULL
};

enum WINDOW_MAP_OBJECT_MANIPULATOR_WIDGET_IDX
{
	WIDX_BACKGROUND,
	WIDX_TITLE,
	WIDX_CLOSE,
	WIDX_PAGE_BACKGROUND,
	WIDX_SURFACE_GROUP,
	WIDX_SURFACE_1,
	WIDX_SURFACE_2,
	WIDX_SURFACE_3,
	WIDX_SURFACE_4,
	WIDX_SURFACE_5,
	WIDX_SURFACE_6,
	WIDX_SURFACE_7,
	WIDX_SURFACE_8,
	WIDX_SURFACE_9,
	WIDX_SURFACE_10,
	WIDX_SURFACE_11,
	WIDX_SURFACE_12,
	WIDX_SURFACE_13,
	WIDX_SURFACE_14,
};

#define SURFACE_BUTTON_LOC(x, y) x, x + 46, y, y + 35

static rct_widget _mapModifierWidgets[] = {
	{ WWT_FRAME,			0,	0,			WW - 1,	0,		WH - 1,		0xFFFFFFFF,							STR_NONE },
	{ WWT_CAPTION,			0,	1,			WW - 2,	1,		14,			STR_MAP_MODIFIER_TITLE,				STR_WINDOW_TITLE_TIP },
	{ WWT_CLOSEBOX,			0,	WW - 13,	WW - 3,	2,		13,			STR_CLOSE_X,						STR_CLOSE_WINDOW_TIP },
	{ WWT_GROUPBOX,			0,	5,			WW - 5,	16,		WH - 5,		STR_MAP_MODIFIER_SURFACE_TYPES,		STR_NONE },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(  9,  30),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC( 59,  30),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(109,  30),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(159,  30),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(  9,  70),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC( 59,  70),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(109,  70),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(159,  70),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(  9, 110),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC( 59, 110),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(109, 110),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(159, 110),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC(  9, 150),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WWT_FLATBTN,			1,	SURFACE_BUTTON_LOC( 59, 150),			SPR_FLOOR_TEXTURE_GRASS,			STR_CHANGE_BASE_LAND_TIP },
	{ WIDGETS_END }
};

static uint32 _surfaceTypes[] = {
	TERRAIN_SAND_DARK, TERRAIN_SAND_LIGHT,  TERRAIN_DIRT,      TERRAIN_GRASS_CLUMPS, TERRAIN_GRASS,
	TERRAIN_ROCK,      TERRAIN_SAND,        TERRAIN_MARTIAN,   TERRAIN_CHECKERBOARD, TERRAIN_ICE,
	TERRAIN_GRID_RED,  TERRAIN_GRID_YELLOW, TERRAIN_GRID_BLUE, TERRAIN_GRID_GREEN
};

static bool _buttonsSurfacePressed[] = {
	false, false, false, false, false, false, false, false, false, false, false, false, false, false
};

static uint64 _mapModifierEnabledWidgets =
	(1ULL << WIDX_CLOSE) |
	(1ULL << WIDX_SURFACE_1) |
	(1ULL << WIDX_SURFACE_2) |
	(1ULL << WIDX_SURFACE_3) |
	(1ULL << WIDX_SURFACE_4) |
	(1ULL << WIDX_SURFACE_5) |
	(1ULL << WIDX_SURFACE_6) |
	(1ULL << WIDX_SURFACE_7) |
	(1ULL << WIDX_SURFACE_8) |
	(1ULL << WIDX_SURFACE_9) |
	(1ULL << WIDX_SURFACE_10) |
	(1ULL << WIDX_SURFACE_11) |
	(1ULL << WIDX_SURFACE_12) |
	(1ULL << WIDX_SURFACE_13) |
	(1ULL << WIDX_SURFACE_14);

void window_map_modifier_open()
{
	rct_window *window = window_bring_to_front_by_class(WC_MAP_MODIFIER);
	if (window != NULL)
		return;

	window = window_create(32, 32, WW, WH, &window_map_object_manupulator_events, WC_MAP_MODIFIER, 0);
	window->widgets = _mapModifierWidgets;
	window->enabled_widgets = _mapModifierEnabledWidgets;
	colour_scheme_update(window);

	// Activate the tool
	tool_set(window, WIDX_BACKGROUND, TOOL_CROSSHAIR);
}

static void window_map_modifier_mouseup(rct_window *w, rct_widgetindex widgetIndex)
{
	switch (widgetIndex)
	{
	case WIDX_CLOSE:
		tool_cancel();
		window_close(w);
		break;
	}

	if (widgetIndex >= WIDX_SURFACE_1 && widgetIndex <= WIDX_SURFACE_14)
	{
		const uint8 index = widgetIndex - WIDX_SURFACE_1;
		_buttonsSurfacePressed[index] = !_buttonsSurfacePressed[index];
		w->pressed_widgets ^= 1ULL << widgetIndex;
		widget_invalidate(w, widgetIndex);
	}
}

static bool window__map_modifier_tool_is_active()
{
	if (!(input_test_flag(INPUT_FLAG_TOOL_ACTIVE)))
		return false;
	if (gCurrentToolWidget.window_classification != WC_MAP_MODIFIER)
		return false;
	return true;
}

static void window_map_modifier_update(rct_window *w)
{
	if (!window__map_modifier_tool_is_active())
	{
		window_close(w);
	}
}

static sint16 _selectionStartX;
static sint16 _selectionStartY;

static void window_map_modifier_tool_down(rct_window *w, rct_widgetindex widgetIndex, sint32 x, sint32 y)
{
	sint16 mapX = x;
	sint16 mapY = y;
	sint32 direction;
	screen_pos_to_map_pos(&mapX, &mapY, &direction);
	if (mapX != MAP_LOCATION_NULL)
	{
		_selectionStartX = mapX;
		_selectionStartY = mapY;
	}
}

static void window_map_modifier_tool_drag(rct_window *w, rct_widgetindex widgetIndex, sint32 x, sint32 y)
{
	sint16 mapX = x;
	sint16 mapY = y;
	sint32 direction;
	screen_pos_to_map_pos(&mapX, &mapY, &direction);
	if (mapX != MAP_LOCATION_NULL)
	{
		map_invalidate_selection_rect();
		gMapSelectFlags |= MAP_SELECT_FLAG_ENABLE;
		gMapSelectPositionA.x = min(_selectionStartX, mapX);
		gMapSelectPositionB.x = max(_selectionStartX, mapX);
		gMapSelectPositionA.y = min(_selectionStartY, mapY);
		gMapSelectPositionB.y = max(_selectionStartY, mapY);
		gMapSelectType = MAP_SELECT_TYPE_FULL;
		map_invalidate_selection_rect();
	}
}

static void window_map_modifier_invalidate(rct_window *w)
{
	for (int i = 0; i < countof(_surfaceTypes); i++)
	{
		w->widgets[WIDX_SURFACE_1 + i].image = SPR_FLOOR_TEXTURE_GRASS + _surfaceTypes[i];
	}
}

static void window_map_modifier_paint(rct_window *w, rct_drawpixelinfo *dpi)
{
	window_draw_widgets(w, dpi);
}
