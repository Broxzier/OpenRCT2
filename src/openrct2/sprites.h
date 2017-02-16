#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
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

#ifndef _SPRITES_H_
#define _SPRITES_H_

enum {
	SPR_NONE = -1,

	SPR_SCROLLING_TEXT_START = 1542,
	SPR_SCROLLING_TEXT_DEFAULT = 1574,

	SPR_EDGE_ROCK_BASE = 1579,
	SPR_EDGE_WOOD_RED_BASE = 1747,
	SPR_EDGE_WOOD_BLACK_BASE = 1663,
	SPR_EDGE_ICE_BASE = 1831,

	SPR_PALETTE_1_START = 3100,
	SPR_PALETTE_1_END = 3110,

	// This is the start of every character there are
	// 224 characters per font (first 32 are control codes hence why it doesn't go to 255)
	// 4 fonts
	// = 896 sprites
	SPR_CHAR_START = 3861,
	SPR_CHAR_END = 4757,

	SPR_TEXT_PALETTE = 4914,
	SPR_PALETTE_2_START = 4915,
	SPR_PALETTE_2_END = 5047,

	SPR_RESIZE = 5058,
	SPR_PALETTE_BTN = 5059,
	SPR_PALETTE_BTN_PRESSED = 5060,
	SPR_SHOP_ITEM_BALLOON = 5061,
	SPR_SHOP_ITEM_TOY = 5062,
	SPR_SHOP_ITEM_MAP = 5063,
	SPR_SHOP_ITEM_PHOTO = 5064,
	SPR_SHOP_ITEM_UMBRELLA = 5065,
	SPR_SHOP_ITEM_DRINK = 5066,
	SPR_SHOP_ITEM_BURGER = 5067,
	SPR_SHOP_ITEM_FRIES = 5068,
	SPR_SHOP_ITEM_ICE_CREAM = 5069,
	SPR_SHOP_ITEM_COTTON_CANDY = 5070,
	SPR_SHOP_ITEM_EMPTY_CAN = 5071,
	SPR_SHOP_ITEM_RUBBISH = 5072,
	SPR_SHOP_ITEM_EMPTY_BURGER_BOX = 5073,
	SPR_SHOP_ITEM_PIZZA = 5074,
	SPR_SHOP_ITEM_VOUCHER = 5075,
	SPR_SHOP_ITEM_POPCORN = 5076,
	SPR_SHOP_ITEM_HOT_DOG = 5077,
	SPR_SHOP_ITEM_TENTACLE = 5078,
	SPR_SHOP_ITEM_HAT = 5079,
	SPR_SHOP_ITEM_CANDY_APPLE = 5080,
	SPR_SHOP_ITEM_TSHIRT = 5081,
	SPR_SHOP_ITEM_DONUT = 5082,
	SPR_SHOP_ITEM_COFFEE = 5083,
	SPR_SHOP_ITEM_EMPTY_CUP = 5084,
	SPR_SHOP_ITEM_CHICKEN = 5085,
	SPR_SHOP_ITEM_LEMONADE = 5086,
	SPR_SHOP_ITEM_EMPTY_BOX = 5087,
	SPR_SHOP_ITEM_EMPTY_BOTTLE = 5088,
	SPR_SHOP_ITEM_PHOTO2 = 5089,
	SPR_SHOP_ITEM_PHOTO3 = 5090,
	SPR_SHOP_ITEM_PHOTO4 = 5091,
	SPR_SHOP_ITEM_PRETZEL = 5092,
	SPR_SHOP_ITEM_CHOCOLATE = 5093,
	SPR_SHOP_ITEM_ICED_TEA = 5094,
	SPR_SHOP_ITEM_FUNNEL_CAKE = 5095,
	SPR_SHOP_ITEM_SUNGLASSES = 5096,
	SPR_SHOP_ITEM_BEEF_NOODLES = 5097,
	SPR_SHOP_ITEM_FRIED_RICE_NOODLES = 5098,
	SPR_SHOP_ITEM_WONTON_SOUP = 5099,
	SPR_SHOP_ITEM_MEATBALL_SOUP = 5100,
	SPR_SHOP_ITEM_FRUIT_JUICE = 5101,
	SPR_SHOP_ITEM_SOYBEAN_MILK = 5102,
	SPR_SHOP_ITEM_SU_JONGKWA = 5103,
	SPR_SHOP_ITEM_SUB_SANDWICH = 5104,
	SPR_SHOP_ITEM_COOKIE = 5105,
	SPR_SHOP_ITEM_EMPTY_BOWL_RED = 5106,
	SPR_SHOP_ITEM_EMPTY_DRINK_CARTON = 5107,
	SPR_SHOP_ITEM_EMPTY_JUICE_CUP = 5108,
	SPR_SHOP_ITEM_ROAST_SAUSAGE = 5109,
	SPR_SHOP_ITEM_EMPTY_BOWL_BLUE = 5110,
	SPR_STAFF_ORDERS_SWEEPING = 5111,
	SPR_STAFF_ORDERS_WATER_FLOWERS = 5112,
	SPR_STAFF_ORDERS_EMPTY_BINS = 5113,
	SPR_STAFF_ORDERS_MOWING = 5114,
	SPR_STAFF_ORDERS_INSPECT_RIDES = 5115,
	SPR_STAFF_ORDERS_FIX_RIDES = 5116,
	SPR_STAFF_PATROL_PATH = 5117,
	SPR_STAFF_COSTUME_PANDA = 5118,
	SPR_STAFF_COSTUME_TIGER = 5119,
	SPR_STAFF_COSTUME_ELEPHANT = 5120,
	SPR_STAFF_COSTUME_ROMAN = 5121,
	SPR_STAFF_COSTUME_GORILLA = 5122,
	SPR_STAFF_COSTUME_SNOWMAN = 5123,
	SPR_STAFF_COSTUME_KNIGHT = 5124,
	SPR_STAFF_COSTUME_ASTRONAUT = 5125,
	SPR_STAFF_COSTUME_BANDIT = 5126,
	SPR_STAFF_COSTUME_SHERIFF = 5127,
	SPR_STAFF_COSTUME_PIRATE = 5128,

	SPR_RIDE_CONSTRUCTION_STRAIGHT = 5137,
	SPR_RIDE_CONSTRUCTION_LEFT_CURVE = 5138,
	SPR_RIDE_CONSTRUCTION_RIGHT_CURVE = 5139,
	SPR_RIDE_CONSTRUCTION_LEFT_CURVE_SMALL = 5140,
	SPR_RIDE_CONSTRUCTION_RIGHT_CURVE_SMALL = 5141,
	SPR_RIDE_CONSTRUCTION_LEFT_CURVE_LARGE = 5142,
	SPR_RIDE_CONSTRUCTION_RIGHT_CURVE_LARGE = 5143,
	SPR_RIDE_CONSTRUCTION_SLOPE_DOWN_STEEP = 5144,
	SPR_RIDE_CONSTRUCTION_SLOPE_DOWN = 5145,
	SPR_RIDE_CONSTRUCTION_SLOPE_LEVEL = 5146,
	SPR_RIDE_CONSTRUCTION_SLOPE_UP = 5147,
	SPR_RIDE_CONSTRUCTION_SLOPE_UP_STEEP = 5148,
	SPR_RIDE_CONSTRUCTION_VERTICAL_RISE = 5149,
	SPR_RIDE_CONSTRUCTION_VERTICAL_DROP = 5150,
	SPR_RIDE_CONSTRUCTION_HELIX_DOWN = 5151,
	SPR_RIDE_CONSTRUCTION_HELIX_UP = 5152,
	SPR_RIDE_CONSTRUCTION_LEFT_BANK = 5153,
	SPR_RIDE_CONSTRUCTION_NO_BANK = 5154,
	SPR_RIDE_CONSTRUCTION_RIGHT_BANK = 5155,
	SPR_RIDE_CONSTRUCTION_U_SHAPED_TRACK = 5156,
	SPR_RIDE_CONSTRUCTION_O_SHAPED_TRACK = 5157,
	SPR_RIDE_CONSTRUCTION_RC_TRACK = 5158,
	SPR_RIDE_CONSTRUCTION_WATER_CHANNEL = 5159,
	SPR_PREVIOUS = 5160,
	SPR_NEXT = 5161,
	SPR_DEMOLISH_CURRENT_SECTION = 5162,
	SPR_CHAIN_LIFT = 5163,
	SPR_CONSTRUCTION = 5164,
	SPR_DEMOLISH = 5165,
	SPR_HEARING_VIEWPORT = 5166,
	SPR_LOCATE = 5167,
	SPR_RENAME = 5168,
	SPR_ROTATE_ARROW = 5169,
	SPR_MIRROR_ARROW = 5170,
	SPR_SCENERY = 5171,
	SPR_SCENERY_CLUSTER = 5172,
	SPR_PAINTBRUSH = 5173,
	SPR_PICKUP_BTN = 5174,
	SPR_PATROL_BTN = 5175,
	SPR_BUY_LAND_RIGHTS = 5176,
	SPR_BUY_CONSTRUCTION_RIGHTS = 5177,
	SPR_NO_ENTRY = 5178,
	SPR_CLOSED = 5179,
	SPR_OPEN = 5180,
	SPR_TESTING = 5181,
	SPR_TOGGLE_OPEN_CLOSE = 5182,
	SPR_FLOPPY = 5183,
	SPR_SHOW_GUESTS_THOUGHTS_ABOUT_THIS_RIDE_ATTRACTION = 5184,
	SPR_SHOW_GUESTS_QUEUING_FOR_THIS_RIDE_ATTRACTION = 5185,
	SPR_SHOW_GUESTS_ON_THIS_RIDE_ATTRACTION = 5186,
	SPR_RIDE = 5187,
	SPR_TRACK_PEEP = 5188,
	SPR_NEW_RIDE = 5189,
	SPR_FINANCE = 5190,
	SPR_NEW_SCENERY = 5191,
	SPR_MAP = 5192,
	SPR_GUESTS = 5193,
	SPR_AWARD = 5194,
	SPR_GRAPH = 5195,
	SPR_MECHANIC = 5196,
	SPR_PARK_ENTRANCE = 5197,
	SPR_TAB = 5198, // 0x144e
	SPR_TAB_ACTIVE = 5199,
	SPR_TAB_PARK_ENTRANCE = 5200,
	SPR_TAB_GEARS_0 = 5201,
	SPR_TAB_GEARS_1 = SPR_TAB_GEARS_0 + 1,
	SPR_TAB_GEARS_2 = SPR_TAB_GEARS_0 + 2,
	SPR_TAB_GEARS_3 = SPR_TAB_GEARS_0 + 3,
	SPR_TAB_WRENCH_0 = 5205,
	SPR_TAB_WRENCH_1 = SPR_TAB_WRENCH_0 + 1,
	SPR_TAB_WRENCH_2 = SPR_TAB_WRENCH_0 + 2,
	SPR_TAB_WRENCH_3 = SPR_TAB_WRENCH_0 + 3,
	SPR_TAB_WRENCH_4 = SPR_TAB_WRENCH_0 + 4,
	SPR_TAB_WRENCH_5 = SPR_TAB_WRENCH_0 + 5,
	SPR_TAB_WRENCH_6 = SPR_TAB_WRENCH_0 + 6,
	SPR_TAB_WRENCH_7 = SPR_TAB_WRENCH_0 + 7,
	SPR_TAB_WRENCH_8 = SPR_TAB_WRENCH_0 + 8,
	SPR_TAB_WRENCH_9 = SPR_TAB_WRENCH_0 + 9,
	SPR_TAB_WRENCH_10 = SPR_TAB_WRENCH_0 + 10,
	SPR_TAB_WRENCH_11 = SPR_TAB_WRENCH_0 + 11,
	SPR_TAB_WRENCH_12 = SPR_TAB_WRENCH_0 + 12,
	SPR_TAB_WRENCH_13 = SPR_TAB_WRENCH_0 + 13,
	SPR_TAB_WRENCH_14 = SPR_TAB_WRENCH_0 + 14,
	SPR_TAB_WRENCH_15 = SPR_TAB_WRENCH_0 + 15,
	SPR_TAB_PAINT_0 = 5221,
	SPR_TAB_PAINT_1 = SPR_TAB_PAINT_0 + 1,
	SPR_TAB_PAINT_2 = SPR_TAB_PAINT_0 + 2,
	SPR_TAB_PAINT_3 = SPR_TAB_PAINT_0 + 3,
	SPR_TAB_PAINT_4 = SPR_TAB_PAINT_0 + 4,
	SPR_TAB_PAINT_5 = SPR_TAB_PAINT_0 + 5,
	SPR_TAB_PAINT_6 = SPR_TAB_PAINT_0 + 6,
	SPR_TAB_PAINT_7 = SPR_TAB_PAINT_0 + 7,
	SPR_TAB_TIMER_0 = 5229,
	SPR_TAB_TIMER_1 = SPR_TAB_TIMER_0 + 1,
	SPR_TAB_TIMER_2 = SPR_TAB_TIMER_0 + 2,
	SPR_TAB_TIMER_3 = SPR_TAB_TIMER_0 + 3,
	SPR_TAB_TIMER_4 = SPR_TAB_TIMER_0 + 4,
	SPR_TAB_TIMER_5 = SPR_TAB_TIMER_0 + 5,
	SPR_TAB_TIMER_6 = SPR_TAB_TIMER_0 + 6,
	SPR_TAB_TIMER_7 = SPR_TAB_TIMER_0 + 7,
	SPR_TAB_GRAPH_A_0 = 5237,
	SPR_TAB_GRAPH_A_1 = SPR_TAB_GRAPH_A_0 + 1,
	SPR_TAB_GRAPH_A_2 = SPR_TAB_GRAPH_A_0 + 2,
	SPR_TAB_GRAPH_A_3 = SPR_TAB_GRAPH_A_0 + 3,
	SPR_TAB_GRAPH_A_4 = SPR_TAB_GRAPH_A_0 + 4,
	SPR_TAB_GRAPH_A_5 = SPR_TAB_GRAPH_A_0 + 5,
	SPR_TAB_GRAPH_A_6 = SPR_TAB_GRAPH_A_0 + 6,
	SPR_TAB_GRAPH_A_7 = SPR_TAB_GRAPH_A_0 + 7,
	SPR_TAB_GRAPH_0 = 5245,
	SPR_TAB_GRAPH_1 = SPR_TAB_GRAPH_0 + 1,
	SPR_TAB_GRAPH_2 = SPR_TAB_GRAPH_0 + 2,
	SPR_TAB_GRAPH_3 = SPR_TAB_GRAPH_0 + 3,
	SPR_TAB_GRAPH_4 = SPR_TAB_GRAPH_0 + 4,
	SPR_TAB_GRAPH_5 = SPR_TAB_GRAPH_0 + 5,
	SPR_TAB_GRAPH_6 = SPR_TAB_GRAPH_0 + 6,
	SPR_TAB_GRAPH_7 = SPR_TAB_GRAPH_0 + 7,
	SPR_TAB_ADMISSION_0 = 5253,
	SPR_TAB_ADMISSION_1 = SPR_TAB_ADMISSION_0 + 1,
	SPR_TAB_ADMISSION_2 = SPR_TAB_ADMISSION_0 + 2,
	SPR_TAB_ADMISSION_3 = SPR_TAB_ADMISSION_0 + 3,
	SPR_TAB_ADMISSION_4 = SPR_TAB_ADMISSION_0 + 4,
	SPR_TAB_ADMISSION_5 = SPR_TAB_ADMISSION_0 + 5,
	SPR_TAB_ADMISSION_6 = SPR_TAB_ADMISSION_0 + 6,
	SPR_TAB_ADMISSION_7 = SPR_TAB_ADMISSION_0 + 7,
	SPR_TAB_FINANCES_SUMMARY_0 = 5261,
	SPR_TAB_FINANCES_SUMMARY_1 = SPR_TAB_FINANCES_SUMMARY_0 + 1,
	SPR_TAB_FINANCES_SUMMARY_2 = SPR_TAB_FINANCES_SUMMARY_0 + 2,
	SPR_TAB_FINANCES_SUMMARY_3 = SPR_TAB_FINANCES_SUMMARY_0 + 3,
	SPR_TAB_FINANCES_SUMMARY_4 = SPR_TAB_FINANCES_SUMMARY_0 + 4,
	SPR_TAB_FINANCES_SUMMARY_5 = SPR_TAB_FINANCES_SUMMARY_0 + 5,
	SPR_TAB_FINANCES_SUMMARY_6 = SPR_TAB_FINANCES_SUMMARY_0 + 6,
	SPR_TAB_FINANCES_SUMMARY_7 = SPR_TAB_FINANCES_SUMMARY_0 + 7,
	SPR_TAB_THOUGHTS_0 = 5269,
	SPR_TAB_THOUGHTS_1 = SPR_TAB_THOUGHTS_0 + 1,
	SPR_TAB_THOUGHTS_2 = SPR_TAB_THOUGHTS_0 + 2,
	SPR_TAB_THOUGHTS_3 = SPR_TAB_THOUGHTS_0 + 3,
	SPR_TAB_THOUGHTS_4 = SPR_TAB_THOUGHTS_0 + 4,
	SPR_TAB_THOUGHTS_5 = SPR_TAB_THOUGHTS_0 + 5,
	SPR_TAB_THOUGHTS_6 = SPR_TAB_THOUGHTS_0 + 6,
	SPR_TAB_THOUGHTS_7 = SPR_TAB_THOUGHTS_0 + 7,
	SPR_TAB_STATS_0 = 5277,
	SPR_TAB_STATS_1 = SPR_TAB_STATS_0 + 1,
	SPR_TAB_STATS_2 = SPR_TAB_STATS_0 + 2,
	SPR_TAB_STATS_3 = SPR_TAB_STATS_0 + 3,
	SPR_TAB_STATS_4 = SPR_TAB_STATS_0 + 4,
	SPR_TAB_STATS_5 = SPR_TAB_STATS_0 + 5,
	SPR_TAB_STATS_6 = SPR_TAB_STATS_0 + 6,
	SPR_PEEP_LARGE_FACE_VERY_VERY_UNHAPPY = 5284,
	SPR_PEEP_LARGE_FACE_VERY_UNHAPPY = 5285,
	SPR_PEEP_LARGE_FACE_UNHAPPY = 5286,
	SPR_PEEP_LARGE_FACE_NORMAL = 5287,
	SPR_PEEP_LARGE_FACE_HAPPY = 5288,
	SPR_PEEP_LARGE_FACE_VERY_HAPPY = 5289,
	SPR_PEEP_LARGE_FACE_VERY_VERY_HAPPY = 5290,
	SPR_PEEP_LARGE_FACE_TIRED = 5291,
	SPR_PEEP_LARGE_FACE_VERY_TIRED = 5292,
	SPR_PEEP_LARGE_FACE_SICK = 5293,
	SPR_PEEP_LARGE_FACE_VERY_SICK_0 = 5294,
	SPR_PEEP_LARGE_FACE_VERY_SICK_1 = SPR_PEEP_LARGE_FACE_VERY_SICK_0 + 1,
	SPR_PEEP_LARGE_FACE_VERY_SICK_2 = SPR_PEEP_LARGE_FACE_VERY_SICK_0 + 2,
	SPR_PEEP_LARGE_FACE_VERY_SICK_3 = SPR_PEEP_LARGE_FACE_VERY_SICK_0 + 3,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 = 5298,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_1 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 1,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_2 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 2,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_3 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 3,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_4 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 4,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_5 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 5,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_6 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 6,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_7 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 7,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_8 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 8,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_9 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 9,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_10 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 10,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_11 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 11,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_12 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 12,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_13 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 13,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_14 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 14,
	SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_15 = SPR_PEEP_LARGE_FACE_VERY_VERY_SICK_0 + 15,
	SPR_PEEP_LARGE_FACE_ANGRY_0 = 5314,
	SPR_PEEP_LARGE_FACE_ANGRY_1 = SPR_PEEP_LARGE_FACE_ANGRY_0 + 1,
	SPR_PEEP_LARGE_FACE_ANGRY_2 = SPR_PEEP_LARGE_FACE_ANGRY_0 + 2,
	SPR_PEEP_LARGE_FACE_ANGRY_3 = SPR_PEEP_LARGE_FACE_ANGRY_0 + 3,
	// 5318 seems to be part of SPR_TAB_STAFF_OPTIONS
	SPR_TAB_STAFF_OPTIONS_0 = 5319,
	SPR_TAB_STAFF_OPTIONS_1 = SPR_TAB_STAFF_OPTIONS_0 + 1,
	SPR_TAB_STAFF_OPTIONS_2 = SPR_TAB_STAFF_OPTIONS_0 + 2,
	SPR_TAB_STAFF_OPTIONS_3 = SPR_TAB_STAFF_OPTIONS_0 + 3,
	SPR_TAB_STAFF_OPTIONS_4 = SPR_TAB_STAFF_OPTIONS_0 + 4,
	SPR_TAB_STAFF_OPTIONS_5 = SPR_TAB_STAFF_OPTIONS_0 + 5,
	SPR_TAB_STAFF_OPTIONS_6 = SPR_TAB_STAFF_OPTIONS_0 + 6,
	SPR_TAB_GUEST_INVENTORY = 5326,
	SPR_TAB_FINANCES_RESEARCH_0 = 5327,


	SPR_TAB_MUSIC_0 = 5335,

	SPR_TAB_SHOPS_AND_STALLS_0 = 5351,
	SPR_TAB_SHOPS_AND_STALLS_1 = SPR_TAB_SHOPS_AND_STALLS_0 + 1,
	SPR_TAB_SHOPS_AND_STALLS_2 = SPR_TAB_SHOPS_AND_STALLS_0 + 2,
	SPR_TAB_SHOPS_AND_STALLS_3 = SPR_TAB_SHOPS_AND_STALLS_0 + 3,
	SPR_TAB_SHOPS_AND_STALLS_4 = SPR_TAB_SHOPS_AND_STALLS_0 + 4,
	SPR_TAB_SHOPS_AND_STALLS_5 = SPR_TAB_SHOPS_AND_STALLS_0 + 5,
	SPR_TAB_SHOPS_AND_STALLS_6 = SPR_TAB_SHOPS_AND_STALLS_0 + 6,
	SPR_TAB_SHOPS_AND_STALLS_7 = SPR_TAB_SHOPS_AND_STALLS_0 + 7,
	SPR_TAB_SHOPS_AND_STALLS_8 = SPR_TAB_SHOPS_AND_STALLS_0 + 8,
	SPR_TAB_SHOPS_AND_STALLS_9 = SPR_TAB_SHOPS_AND_STALLS_0 + 9,
	SPR_TAB_SHOPS_AND_STALLS_10 = SPR_TAB_SHOPS_AND_STALLS_0 + 10,
	SPR_TAB_SHOPS_AND_STALLS_11 = SPR_TAB_SHOPS_AND_STALLS_0 + 11,
	SPR_TAB_SHOPS_AND_STALLS_12 = SPR_TAB_SHOPS_AND_STALLS_0 + 12,
	SPR_TAB_SHOPS_AND_STALLS_13 = SPR_TAB_SHOPS_AND_STALLS_0 + 13,
	SPR_TAB_SHOPS_AND_STALLS_14 = SPR_TAB_SHOPS_AND_STALLS_0 + 14,
	SPR_TAB_SHOPS_AND_STALLS_15 = SPR_TAB_SHOPS_AND_STALLS_0 + 15,

	SPR_TAB_KIOSKS_AND_FACILITIES_0 = 5367,
	SPR_TAB_KIOSKS_AND_FACILITIES_1 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 1,
	SPR_TAB_KIOSKS_AND_FACILITIES_2 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 2,
	SPR_TAB_KIOSKS_AND_FACILITIES_3 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 3,
	SPR_TAB_KIOSKS_AND_FACILITIES_4 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 4,
	SPR_TAB_KIOSKS_AND_FACILITIES_5 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 5,
	SPR_TAB_KIOSKS_AND_FACILITIES_6 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 6,
	SPR_TAB_KIOSKS_AND_FACILITIES_7 = SPR_TAB_KIOSKS_AND_FACILITIES_0 + 7,

	SPR_TAB_FINANCES_FINANCIAL_GRAPH_0 = 5375,

	SPR_TAB_FINANCES_PROFIT_GRAPH_0 = 5391,

	SPR_TAB_FINANCES_VALUE_GRAPH_0 = 5407,

	SPR_TAB_FINANCES_MARKETING_0 = 5423,

	SPR_TAB_RIDE_0 = 5442,
	SPR_TAB_RIDE_1 = SPR_TAB_RIDE_0 + 1,
	SPR_TAB_RIDE_2 = SPR_TAB_RIDE_0 + 2,
	SPR_TAB_RIDE_3 = SPR_TAB_RIDE_0 + 3,
	SPR_TAB_RIDE_4 = SPR_TAB_RIDE_0 + 4,
	SPR_TAB_RIDE_5 = SPR_TAB_RIDE_0 + 5,
	SPR_TAB_RIDE_6 = SPR_TAB_RIDE_0 + 6,
	SPR_TAB_RIDE_7 = SPR_TAB_RIDE_0 + 7,
	SPR_TAB_RIDE_8 = SPR_TAB_RIDE_0 + 8,
	SPR_TAB_RIDE_9 = SPR_TAB_RIDE_0 + 9,
	SPR_TAB_RIDE_10 = SPR_TAB_RIDE_0 + 10,
	SPR_TAB_RIDE_11 = SPR_TAB_RIDE_0 + 11,
	SPR_TAB_RIDE_12 = SPR_TAB_RIDE_0 + 12,
	SPR_TAB_RIDE_13 = SPR_TAB_RIDE_0 + 13,
	SPR_TAB_RIDE_14 = SPR_TAB_RIDE_0 + 14,
	SPR_TAB_RIDE_15 = SPR_TAB_RIDE_0 + 15,
	SPR_TAB_RIDE_16 = SPR_TAB_RIDE_0 + 16, // Same as SPR_TAB_RIDE_0
	SPR_TAB_SCENERY_TREES = 5459,
	SPR_TAB_SCENERY_URBAN = 5460,
	SPR_TAB_SCENERY_WALLS = 5461,
	SPR_TAB_SCENERY_SIGNAGE = 5462,
	SPR_TAB_SCENERY_PATHS = 5463,
	SPR_TAB_SCENERY_PATH_ITEMS = 5464,
	SPR_TAB_SCENERY_STATUES = 5465,
	SPR_TAB_PARK = 5466,
	SPR_TAB_WATER = 5467,
	SPR_TAB_STATS = 5468,
	SPR_AWARD_MOST_UNTIDY = 5469,
	SPR_AWARD_MOST_TIDY = SPR_AWARD_MOST_UNTIDY + 1,
	SPR_AWARD_BEST_ROLLERCOASTERS = SPR_AWARD_MOST_UNTIDY + 2,
	SPR_AWARD_BEST_VALUE = SPR_AWARD_MOST_UNTIDY + 3,
	SPR_AWARD_MOST_BEAUTIFUL = SPR_AWARD_MOST_UNTIDY + 4,
	SPR_AWARD_WORST_VALUE = SPR_AWARD_MOST_UNTIDY + 5,
	SPR_AWARD_SAFEST = SPR_AWARD_MOST_UNTIDY + 6,
	SPR_AWARD_BEST_STAFF = SPR_AWARD_MOST_UNTIDY + 7,
	SPR_AWARD_BEST_FOOD = SPR_AWARD_MOST_UNTIDY + 8,
	SPR_AWARD_WORST_FOOD = SPR_AWARD_MOST_UNTIDY + 9,
	SPR_AWARD_BEST_RESTROOMS = SPR_AWARD_MOST_UNTIDY + 10,
	SPR_AWARD_MOST_DISAPPOINTING = SPR_AWARD_MOST_UNTIDY + 11,
	SPR_AWARD_BEST_WATER_RIDES = SPR_AWARD_MOST_UNTIDY + 12,
	SPR_AWARD_BEST_CUSTOM_DESIGNED_RIDES = SPR_AWARD_MOST_UNTIDY + 13,
	SPR_AWARD_MOST_DAZZLING_RIDE_COLOURS = SPR_AWARD_MOST_UNTIDY + 14,
	SPR_AWARD_MOST_CONFUSING_LAYOUT = SPR_AWARD_MOST_UNTIDY + 15,
	SPR_AWARD_BEST_GENTLE_RIDES = SPR_AWARD_MOST_UNTIDY + 16,
	SPR_PEEP_SMALL_FACE_VERY_VERY_UNHAPPY = 5486,
	SPR_PEEP_SMALL_FACE_VERY_UNHAPPY = 5487,
	SPR_PEEP_SMALL_FACE_UNHAPPY = 5488,
	SPR_PEEP_SMALL_FACE_NORMAL = 5489,
	SPR_PEEP_SMALL_FACE_HAPPY = 5490,
	SPR_PEEP_SMALL_FACE_VERY_HAPPY = 5491,
	SPR_PEEP_SMALL_FACE_VERY_VERY_HAPPY = 5492,
	SPR_PEEP_SMALL_FACE_TIRED = 5493,
	SPR_PEEP_SMALL_FACE_VERY_TIRED = 5494,
	SPR_PEEP_SMALL_FACE_SICK = 5495,
	SPR_PEEP_SMALL_FACE_VERY_SICK = 5496,
	SPR_PEEP_SMALL_FACE_VERY_VERY_SICK = 5497,
	SPR_PEEP_SMALL_FACE_ANGRY = 5498,
	SPR_LAND_TOOL_DECREASE = 5499,
	SPR_LAND_TOOL_DECREASE_PRESSED = 5500,
	SPR_LAND_TOOL_INCREASE = 5501,
	SPR_LAND_TOOL_INCREASE_PRESSED = 5502,
	SPR_LAND_TOOL_SIZE_0 = 5503,
	SPR_LAND_TOOL_SIZE_1 = SPR_LAND_TOOL_SIZE_0 + 1,
	SPR_LAND_TOOL_SIZE_2 = SPR_LAND_TOOL_SIZE_0 + 2,
	SPR_LAND_TOOL_SIZE_3 = SPR_LAND_TOOL_SIZE_0 + 3,
	SPR_LAND_TOOL_SIZE_4 = SPR_LAND_TOOL_SIZE_0 + 4,
	SPR_LAND_TOOL_SIZE_5 = SPR_LAND_TOOL_SIZE_0 + 5,
	SPR_LAND_TOOL_SIZE_6 = SPR_LAND_TOOL_SIZE_0 + 6,
	SPR_LAND_TOOL_SIZE_7 = SPR_LAND_TOOL_SIZE_0 + 7,
	SPR_TAB_OBJECTIVE_0 = 5511,
	SPR_TAB_OBJECTIVE_1 = SPR_TAB_OBJECTIVE_0 + 1,
	SPR_TAB_OBJECTIVE_2 = SPR_TAB_OBJECTIVE_0 + 2,
	SPR_TAB_OBJECTIVE_3 = SPR_TAB_OBJECTIVE_0 + 3,
	SPR_TAB_OBJECTIVE_4 = SPR_TAB_OBJECTIVE_0 + 4,
	SPR_TAB_OBJECTIVE_5 = SPR_TAB_OBJECTIVE_0 + 5,
	SPR_TAB_OBJECTIVE_6 = SPR_TAB_OBJECTIVE_0 + 6,
	SPR_TAB_OBJECTIVE_7 = SPR_TAB_OBJECTIVE_0 + 7,
	SPR_TAB_OBJECTIVE_8 = SPR_TAB_OBJECTIVE_0 + 8,
	SPR_TAB_OBJECTIVE_9 = SPR_TAB_OBJECTIVE_0 + 9,
	SPR_TAB_OBJECTIVE_10 = SPR_TAB_OBJECTIVE_0 + 10,
	SPR_TAB_OBJECTIVE_11 = SPR_TAB_OBJECTIVE_0 + 11,
	SPR_TAB_OBJECTIVE_12 = SPR_TAB_OBJECTIVE_0 + 12,
	SPR_TAB_OBJECTIVE_13 = SPR_TAB_OBJECTIVE_0 + 13,
	SPR_TAB_OBJECTIVE_14 = SPR_TAB_OBJECTIVE_0 + 14,
	SPR_TAB_OBJECTIVE_15 = SPR_TAB_OBJECTIVE_0 + 15,
	SPR_TAB_AWARDS = 5527,
	SPR_TAB_QUESTION = 5528,

	SPR_TAB_RIDES_SHOP_0 = 5530,

	SPR_TAB_RIDES_TRANSPORT_0 = 5537,

	SPR_TAB_RIDES_GENTLE_0 = 5542,

	SPR_TAB_RIDES_ROLLER_COASTERS_0 = 5546,

	SPR_TAB_RIDES_WATER_0 = 5551,

	SPR_TAB_RIDES_THRILL_0 = 5557,

	SPR_TAB_LARGE = 5564,
	SPR_TAB_LARGE_SELECTED = 5565,
	SPR_TAB_EXTRA_LARGE = 5566,
	SPR_TAB_EXTRA_LARGE_SELECTED = 5567,
	SPR_TAB_GUESTS_0 = 5568,
	SPR_TAB_GUESTS_1 = SPR_TAB_GUESTS_0 + 1,
	SPR_TAB_GUESTS_2 = SPR_TAB_GUESTS_0 + 2,
	SPR_TAB_GUESTS_3 = SPR_TAB_GUESTS_0 + 3,
	SPR_TAB_GUESTS_4 = SPR_TAB_GUESTS_0 + 4,
	SPR_TAB_GUESTS_5 = SPR_TAB_GUESTS_0 + 5,
	SPR_TAB_GUESTS_6 = SPR_TAB_GUESTS_0 + 6,
	SPR_TAB_GUESTS_7 = SPR_TAB_GUESTS_0 + 7,
	SPR_MAZE_CONSTRUCTION_BUILD = 5576,
	SPR_MAZE_CONSTRUCTION_MOVE = 5577,
	SPR_MAZE_CONSTRUCTION_FILL_IN = 5578,
	SPR_FLOOR_TEXTURE_GRASS = 5579,
	SPR_FLOOR_TEXTURE_SAND = SPR_FLOOR_TEXTURE_GRASS + 1,
	SPR_FLOOR_TEXTURE_DIRT = SPR_FLOOR_TEXTURE_GRASS + 2,
	SPR_FLOOR_TEXTURE_ROCK = SPR_FLOOR_TEXTURE_GRASS + 3,
	SPR_FLOOR_TEXTURE_MARTIAN = SPR_FLOOR_TEXTURE_GRASS + 4,
	SPR_FLOOR_TEXTURE_CHECKERBOARD = SPR_FLOOR_TEXTURE_GRASS + 5,
	SPR_FLOOR_TEXTURE_GRASS_CLUMPS = SPR_FLOOR_TEXTURE_GRASS + 6,
	SPR_FLOOR_TEXTURE_ICE = SPR_FLOOR_TEXTURE_GRASS + 7,
	SPR_FLOOR_TEXTURE_GRID_RED = SPR_FLOOR_TEXTURE_GRASS + 8,
	SPR_FLOOR_TEXTURE_GRID_YELLOW = SPR_FLOOR_TEXTURE_GRASS + 9,
	SPR_FLOOR_TEXTURE_GRID_BLUE = SPR_FLOOR_TEXTURE_GRASS + 10,
	SPR_FLOOR_TEXTURE_GRID_GREEN = SPR_FLOOR_TEXTURE_GRASS + 11,
	SPR_FLOOR_TEXTURE_SAND_DARK = SPR_FLOOR_TEXTURE_GRASS + 12,
	SPR_FLOOR_TEXTURE_SAND_LIGHT = SPR_FLOOR_TEXTURE_GRASS + 13,
	SPR_WALL_TEXTURE_ROCK = 5593,
	SPR_WALL_TEXTURE_WOOD_RED = SPR_WALL_TEXTURE_ROCK + 1,
	SPR_WALL_TEXTURE_WOOD_BLACK = SPR_WALL_TEXTURE_ROCK + 2,
	SPR_WALL_TEXTURE_ICE = SPR_WALL_TEXTURE_ROCK + 3,
	SPR_TOOLBAR_PAUSE = 5597,

	SPR_TOOLBAR_FILE = 5599,

	SPR_TOOLBAR_ZOOM_OUT = 5601,

	SPR_TOOLBAR_ZOOM_OUT_DISABLED = 5603,
	SPR_TOOLBAR_ZOOM_IN = 5604,

	SPR_TOOLBAR_ZOOM_IN_DISABLED = 5606,
	SPR_TOOLBAR_ROTATE = 5607,

	SPR_TOOLBAR_LAND = 5609,

	SPR_TOOLBAR_MAP = 5611,

	SPR_TOOLBAR_GUESTS = 5613,

	SPR_TOOLBAR_SCENERY = 5615,

	SPR_TOOLBAR_WATER = 5617,

	SPR_TOOLBAR_RIDES = 5619,

	SPR_TOOLBAR_VIEW = 5621,

	SPR_TOOLBAR_FOOTPATH = 5623,

	SPR_TAB_TOOLBAR = 5625,

	SPR_TOOLBAR_STAFF = 5627,

	SPR_TOOLBAR_PARK = 5629,

	SPR_TOOLBAR_CONSTRUCT_RIDE = 5631,

	SPR_TOOLBAR_CLEAR_SCENERY = 5633,

	SPR_CONSTRUCTION_DIRECTION_NE = 5635,
	SPR_CONSTRUCTION_DIRECTION_SE = 5636,
	SPR_CONSTRUCTION_DIRECTION_SW = 5637,
	SPR_CONSTRUCTION_DIRECTION_NW = 5638,
	SPR_CONSTRUCTION_FOOTPATH_LAND = 5639,
	SPR_CONSTRUCTION_FOOTPATH_BRIDGE = 5640,

	SPR_RIDE_DESIGN_PREVIEW_SPIRAL_ROLLER_COASTER_TRACK = 14222,
	SPR_RIDE_DESIGN_PREVIEW_SPIRAL_ROLLER_COASTER_SUPPORTS = 14223,
	SPR_RIDE_DESIGN_PREVIEW_STAND_UP_ROLLER_COASTER_TRACK = 14224,
	SPR_RIDE_DESIGN_PREVIEW_STAND_UP_ROLLER_COASTER_SUPPORTS = 14225,
	SPR_RIDE_DESIGN_PREVIEW_SUSPENDED_SWINGING_COASTER_TRACK = 14226,
	SPR_RIDE_DESIGN_PREVIEW_SUSPENDED_SWINGING_COASTER_SUPPORTS = 14227,
	SPR_RIDE_DESIGN_PREVIEW_INVERTED_ROLLER_COASTER_TRACK = 14228,
	SPR_RIDE_DESIGN_PREVIEW_INVERTED_ROLLER_COASTER_SUPPORTS = 14229,
	SPR_RIDE_DESIGN_PREVIEW_JUNIOR_ROLLER_COASTER_TRACK = 14230,
	SPR_RIDE_DESIGN_PREVIEW_JUNIOR_ROLLER_COASTER_SUPPORTS = 14231,
	SPR_RIDE_DESIGN_PREVIEW_MINIATURE_RAILWAY_TRACK = 14232,
	SPR_RIDE_DESIGN_PREVIEW_MINIATURE_RAILWAY_SUPPORTS = 14233,
	SPR_RIDE_DESIGN_PREVIEW_MONORAIL_TRACK = 14234,
	SPR_RIDE_DESIGN_PREVIEW_MONORAIL_SUPPORTS = 14235,
	SPR_RIDE_DESIGN_PREVIEW_MINI_SUSPENDED_COASTER_TRACK = 14236,
	SPR_RIDE_DESIGN_PREVIEW_MINI_SUSPENDED_COASTER_SUPPORTS = 14237,
	SPR_RIDE_DESIGN_PREVIEW_BOAT_RIDE_TRACK = 14238,
	SPR_RIDE_DESIGN_PREVIEW_BOAT_RIDE_SUPPORTS = 14239,
	SPR_RIDE_DESIGN_PREVIEW_WOODEN_WILD_MOUSE_TRACK = 14240,
	SPR_RIDE_DESIGN_PREVIEW_WOODEN_WILD_MOUSE_SUPPORTS = 14241,
	SPR_RIDE_DESIGN_PREVIEW_STEEPLECHASE_TRACK = 14242,
	SPR_RIDE_DESIGN_PREVIEW_STEEPLECHASE_SUPPORTS = 14243,
	SPR_RIDE_DESIGN_PREVIEW_CAR_RIDE_TRACK = 14244,
	SPR_RIDE_DESIGN_PREVIEW_CAR_RIDE_SUPPORTS = 14245,
	SPR_RIDE_DESIGN_PREVIEW_LAUNCHED_FREEFALL_TRACK = 14246,
	SPR_RIDE_DESIGN_PREVIEW_LAUNCHED_FREEFALL_SUPPORTS = 14247,
	SPR_RIDE_DESIGN_PREVIEW_BOBSLEIGH_COASTER_TRACK = 14248,
	SPR_RIDE_DESIGN_PREVIEW_BOBSLEIGH_COASTER_SUPPORTS = 14249,
	SPR_RIDE_DESIGN_PREVIEW_OBSERVATION_TOWER_TRACK = 14250,
	SPR_RIDE_DESIGN_PREVIEW_OBSERVATION_TOWER_SUPPORTS = 14251,
	SPR_RIDE_DESIGN_PREVIEW_LOOPING_ROLLER_COASTER_TRACK = 14252,
	SPR_RIDE_DESIGN_PREVIEW_LOOPING_ROLLER_COASTER_SUPPORTS = 14253,
	SPR_RIDE_DESIGN_PREVIEW_DINGHY_SLIDE_TRACK = 14254,
	SPR_RIDE_DESIGN_PREVIEW_DINGHY_SLIDE_SUPPORTS = 14255,
	SPR_RIDE_DESIGN_PREVIEW_MINE_TRAIN_COASTER_TRACK = 14256,
	SPR_RIDE_DESIGN_PREVIEW_MINE_TRAIN_COASTER_SUPPORTS = 14257,
	SPR_RIDE_DESIGN_PREVIEW_CHAIRLIFT_TRACK = 14258,
	SPR_RIDE_DESIGN_PREVIEW_CHAIRLIFT_SUPPORTS = 14259,
	SPR_RIDE_DESIGN_PREVIEW_CORKSCREW_ROLLER_COASTER_TRACK = 14260,
	SPR_RIDE_DESIGN_PREVIEW_CORKSCREW_ROLLER_COASTER_SUPPORTS = 14261,

	SPR_RIDE_DESIGN_PREVIEW_SPIRAL_SLIDE_TRACK = 14264,

	SPR_RIDE_DESIGN_PREVIEW_GO_KARTS_TRACK = 14266,
	SPR_RIDE_DESIGN_PREVIEW_GO_KARTS_SUPPORTS = 14267,
	SPR_RIDE_DESIGN_PREVIEW_LOG_FLUME_TRACK = 14268,
	SPR_RIDE_DESIGN_PREVIEW_LOG_FLUME_SUPPORTS = 14269,
	SPR_RIDE_DESIGN_PREVIEW_RIVER_RAPIDS_TRACK = 14270,
	SPR_RIDE_DESIGN_PREVIEW_RIVER_RAPIDS_SUPPORTS = 14271,
	SPR_RIDE_DESIGN_PREVIEW_DODGEMS_TRACK = 14272,
	SPR_RIDE_DESIGN_PREVIEW_DODGEMS_SUPPORTS = 14273,
	SPR_RIDE_DESIGN_PREVIEW_PIRATE_SHIP_TRACK = 14274,
	SPR_RIDE_DESIGN_PREVIEW_PIRATE_SHIP_SUPPORTS = 14275,
	SPR_RIDE_DESIGN_PREVIEW_SWINGING_INVERTER_SHIP_TRACK = 14276,
	SPR_RIDE_DESIGN_PREVIEW_SWINGING_INVERTER_SHIP_SUPPORTS = 14277,

	SPR_RIDE_DESIGN_PREVIEW_FERRIS_WHEEL_TRACK = 14296,

	SPR_RIDE_DESIGN_PREVIEW_TOP_SPIN_TRACK = 14302,

	SPR_RIDE_DESIGN_PREVIEW_REVERSE_FREEFALL_COASTER_TRACK = 14306,
	SPR_RIDE_DESIGN_PREVIEW_REVERSE_FREEFALL_COASTER_SUPPORTS = 14307,
	SPR_RIDE_DESIGN_PREVIEW_LIFT_TRACK = 14308,

	SPR_RIDE_DESIGN_PREVIEW_VERTICAL_DROP_ROLLER_COASTER_TRACK = 14310,
	SPR_RIDE_DESIGN_PREVIEW_VERTICAL_DROP_ROLLER_COASTER_SUPPORTS = 14311,

	SPR_RIDE_DESIGN_PREVIEW_GHOST_TRAIN_TRACK = 14322,
	SPR_RIDE_DESIGN_PREVIEW_GHOST_TRAIN_SUPPORTS = 14323,
	SPR_RIDE_DESIGN_PREVIEW_TWISTER_ROLLER_COASTER_TRACK = 14324,
	SPR_RIDE_DESIGN_PREVIEW_TWISTER_ROLLER_COASTER_SUPPORTS = 14325,
	SPR_RIDE_DESIGN_PREVIEW_WOODEN_ROLLER_COASTER_TRACK = 14326,
	SPR_RIDE_DESIGN_PREVIEW_WOODEN_ROLLER_COASTER_SUPPORTS = 14327,
	SPR_RIDE_DESIGN_PREVIEW_SIDE_FRICTION_ROLLER_COASTER_TRACK = 14328,
	SPR_RIDE_DESIGN_PREVIEW_SIDE_FRICTION_ROLLER_COASTER_SUPPORTS = 14329,
	SPR_RIDE_DESIGN_PREVIEW_WILD_MOUSE_TRACK = 14330,
	SPR_RIDE_DESIGN_PREVIEW_WILD_MOUSE_SUPPORTS = 14331,
	SPR_RIDE_DESIGN_PREVIEW_MULTI_DIMENSION_ROLLER_COASTER_TRACK = 14332,
	SPR_RIDE_DESIGN_PREVIEW_MULTI_DIMENSION_ROLLER_COASTER_SUPPORTS = 14333,

	SPR_RIDE_DESIGN_PREVIEW_FLYING_ROLLER_COASTER_TRACK = 14336,
	SPR_RIDE_DESIGN_PREVIEW_FLYING_ROLLER_COASTER_SUPPORTS = 14337,

	SPR_RIDE_DESIGN_PREVIEW_VIRGINIA_REEL_TRACK = 14340,
	SPR_RIDE_DESIGN_PREVIEW_VIRGINIA_REEL_SUPPORTS = 14341,
	SPR_RIDE_DESIGN_PREVIEW_SPLASH_BOATS_TRACK = 14342,
	SPR_RIDE_DESIGN_PREVIEW_SPLASH_BOATS_SUPPORTS = 14343,
	SPR_RIDE_DESIGN_PREVIEW_MINI_HELICOPTERS_TRACK = 14344,
	SPR_RIDE_DESIGN_PREVIEW_MINI_HELICOPTERS_SUPPORTS = 14345,
	SPR_RIDE_DESIGN_PREVIEW_LAY_DOWN_ROLLER_COASTER_TRACK = 14346,
	SPR_RIDE_DESIGN_PREVIEW_LAY_DOWN_ROLLER_COASTER_SUPPORTS = 14347,
	SPR_RIDE_DESIGN_PREVIEW_SUSPENDED_MONORAIL_TRACK = 14348,
	SPR_RIDE_DESIGN_PREVIEW_SUSPENDED_MONORAIL_SUPPORTS = 14349,

	SPR_RIDE_DESIGN_PREVIEW_REVERSER_ROLLER_COASTER_TRACK = 14352,
	SPR_RIDE_DESIGN_PREVIEW_REVERSER_ROLLER_COASTER_SUPPORTS = 14353,
	SPR_RIDE_DESIGN_PREVIEW_HEARTLINE_TWISTER_COASTER_TRACK = 14354,
	SPR_RIDE_DESIGN_PREVIEW_HEARTLINE_TWISTER_COASTER_SUPPORTS = 14355,
	SPR_RIDE_DESIGN_PREVIEW_MINI_GOLF_TRACK = 14356,
	SPR_RIDE_DESIGN_PREVIEW_MINI_GOLF_SUPPORTS = 14357,
	SPR_RIDE_DESIGN_PREVIEW_GIGA_COASTER_TRACK = 14358,
	SPR_RIDE_DESIGN_PREVIEW_GIGA_COASTER_SUPPORTS = 14359,
	SPR_RIDE_DESIGN_PREVIEW_ROTO_DROP_TRACK = 14360,
	SPR_RIDE_DESIGN_PREVIEW_ROTO_DROP_SUPPORTS = 14361,
	SPR_RIDE_DESIGN_PREVIEW_FLYING_SAUCERS_TRACK = 14362,

	SPR_RIDE_DESIGN_PREVIEW_MONORAIL_CYCLES_TRACK = 14366,
	SPR_RIDE_DESIGN_PREVIEW_MONORAIL_CYCLES_SUPPORTS = 14367,
	SPR_RIDE_DESIGN_PREVIEW_COMPACT_INVERTED_COASTER_TRACK = 14368,
	SPR_RIDE_DESIGN_PREVIEW_COMPACT_INVERTED_COASTER_SUPPORTS = 14369,
	SPR_RIDE_DESIGN_PREVIEW_WATER_COASTER_TRACK = 14370,
	SPR_RIDE_DESIGN_PREVIEW_WATER_COASTER_SUPPORTS = 14371,
	SPR_RIDE_DESIGN_PREVIEW_AIR_POWERED_VERTICAL_COASTER_TRACK = 14372,
	SPR_RIDE_DESIGN_PREVIEW_AIR_POWERED_VERTICAL_COASTER_SUPPORTS = 14373,
	SPR_RIDE_DESIGN_PREVIEW_INVERTED_HAIRPIN_COASTER_TRACK = 14374,
	SPR_RIDE_DESIGN_PREVIEW_INVERTED_HAIRPIN_COASTER_SUPPORTS = 14375,
	SPR_RIDE_DESIGN_PREVIEW_MAGIC_CARPET_TRACK = 14376,
	SPR_RIDE_DESIGN_PREVIEW_MAGIC_CARPET_SUPPORTS = 14377,
	SPR_RIDE_DESIGN_PREVIEW_SUBMARINE_RIDE_TRACK = 14378,
	SPR_RIDE_DESIGN_PREVIEW_SUBMARINE_RIDE_SUPPORTS = 14379,
	SPR_RIDE_DESIGN_PREVIEW_RIVER_RAFTS_TRACK = 14380,
	SPR_RIDE_DESIGN_PREVIEW_RIVER_RAFTS_SUPPORTS = 14381,

	SPR_RIDE_DESIGN_PREVIEW_INVERTED_IMPULSE_COASTER_TRACK = 14394,
	SPR_RIDE_DESIGN_PREVIEW_INVERTED_IMPULSE_COASTER_SUPPORTS = 14395,
	SPR_RIDE_DESIGN_PREVIEW_MINI_ROLLER_COASTER_TRACK = 14396,
	SPR_RIDE_DESIGN_PREVIEW_MINI_ROLLER_COASTER_SUPPORTS = 14397,
	SPR_RIDE_DESIGN_PREVIEW_MINE_RIDE_TRACK = 14398,
	SPR_RIDE_DESIGN_PREVIEW_MINE_RIDE_SUPPORTS = 14399,

	SPR_RIDE_DESIGN_PREVIEW_LIM_LAUNCHED_ROLLER_COASTER_TRACK = 14402,
	SPR_RIDE_DESIGN_PREVIEW_LIM_LAUNCHED_ROLLER_COASTER_SUPPORTS = 14403,

	SPR_RIDE_DESIGN_PREVIEW_MAZE_BRICK_WALLS = 21990,
	SPR_RIDE_DESIGN_PREVIEW_MAZE_HEDGES = 21991,
	SPR_RIDE_DESIGN_PREVIEW_MAZE_ICE_BLOCKS = 21992,
	SPR_RIDE_DESIGN_PREVIEW_MAZE_WOODEN_FENCES = 21993,

	SPR_NEXT_WEATHER = 23189,
	SPR_WEATHER_SUN = 23190,
	SPR_WEATHER_SUN_CLOUD = 23191,
	SPR_WEATHER_CLOUD = 23192,
	SPR_WEATHER_LIGHT_RAIN = 23193,
	SPR_WEATHER_HEAVY_RAIN = 23194,
	SPR_WEATHER_STORM = 23195,
	SPR_WEATHER_UNKNOWN = 23196,
	SPR_RATING_LOW = 23197,
	SPR_RATING_HIGH = 23198,
	SPR_MENU_CHECKMARK = 23199,
	SPR_FADE_1 = 23200,
	SPR_FADE_2 = 23201,
	SPR_FADE_3 = 23202,
	SPR_FADE_4 = 23203,
	SPR_FADE_5 = 23204,
	SPR_FADE_6 = 23205,
	SPR_FADE_7 = 23206,
	SPR_MENU_NEW_GAME = 23207,
	SPR_MENU_LOAD_GAME = 23208,
	SPR_MENU_TUTORIAL = 23209,
	SPR_MENU_EXIT = 23210,
	SPR_MENU_TOOLBOX = 23211,
	SPR_MENU_LOGO = 23212,
	SPR_CREDITS_LOGO_SMALL = 23213,
	SPR_CREDITS_CHRIS_SAWYER_SMALL = 23214,
	SPR_INTRO_CHRIS_SAWYER_00 = 23215,
	SPR_INTRO_CHRIS_SAWYER_10 = SPR_INTRO_CHRIS_SAWYER_00 + 1,
	SPR_INTRO_LOGO_00 = 23218,
	SPR_INTRO_LOGO_10 = SPR_INTRO_LOGO_00 + 1,
	SPR_INTRO_LOGO_20 = SPR_INTRO_LOGO_00 + 2,
	SPR_INTRO_LOGO_01 = SPR_INTRO_LOGO_00 + 3,
	SPR_INTRO_LOGO_11 = SPR_INTRO_LOGO_00 + 4,
	SPR_INTRO_LOGO_21 = SPR_INTRO_LOGO_00 + 5,

	SPR_INTRO_INFOGRAMES_00 = 23226,
	SPR_INTRO_INFOGRAMES_10 = SPR_INTRO_INFOGRAMES_00 + 1,
	SPR_INTRO_INFOGRAMES_01 = SPR_INTRO_INFOGRAMES_00 + 2,
	SPR_INTRO_INFOGRAMES_11 = SPR_INTRO_INFOGRAMES_00 + 3,
	SPR_CREDITS_INFOGRAMES = 23230,

	SPR_NEW_RIDE_MASK = 29013,

	SPR_G2_BEGIN = 324288,
	SPR_G2_LOGO = SPR_G2_BEGIN + 0,
	SPR_G2_TITLE = SPR_G2_BEGIN + 1,
	SPR_G2_FASTFORWARD = SPR_G2_BEGIN + 2,
	SPR_G2_SPEED_ARROW = SPR_G2_BEGIN + 3,
	SPR_G2_HYPER_ARROW = SPR_G2_BEGIN + 4,
	SPR_G2_TAB_TWITCH = SPR_G2_BEGIN + 5,
	SPR_G2_TAB_LAND = SPR_G2_BEGIN + 6,

	SPR_G2_PLACEHOLDER = SPR_G2_BEGIN + 7,

	SPR_G2_ZOOM_IN = SPR_G2_BEGIN + 8,
	SPR_G2_ZOOM_IN_DISABLED = SPR_G2_BEGIN + 9,
	SPR_G2_ZOOM_OUT = SPR_G2_BEGIN + 10,
	SPR_G2_ZOOM_OUT_DISABLED = SPR_G2_BEGIN + 11,

	SPR_G2_TAB_TREE = SPR_G2_BEGIN + 12,
	SPR_G2_TAB_PENCIL = SPR_G2_BEGIN + 13,
	SPR_G2_BUTTON_LARGE_SCENERY = SPR_G2_BEGIN + 14,
	SPR_G2_BUTTON_TREES = SPR_G2_BEGIN + 15,
	SPR_G2_BUTTON_FOOTPATH = SPR_G2_BEGIN + 16,

	SPR_G2_RCT1_CLOSE_BUTTON_0 = SPR_G2_BEGIN + 17,
	SPR_G2_RCT1_CLOSE_BUTTON_1 = SPR_G2_BEGIN + 18,
	SPR_G2_RCT1_CLOSE_BUTTON_2 = SPR_G2_BEGIN + 19,
	SPR_G2_RCT1_CLOSE_BUTTON_3 = SPR_G2_BEGIN + 20,
	SPR_G2_RCT1_TEST_BUTTON_0 = SPR_G2_BEGIN + 21,
	SPR_G2_RCT1_TEST_BUTTON_1 = SPR_G2_BEGIN + 22,
	SPR_G2_RCT1_TEST_BUTTON_2 = SPR_G2_BEGIN + 23,
	SPR_G2_RCT1_TEST_BUTTON_3 = SPR_G2_BEGIN + 24,
	SPR_G2_RCT1_OPEN_BUTTON_0 = SPR_G2_BEGIN + 25,
	SPR_G2_RCT1_OPEN_BUTTON_1 = SPR_G2_BEGIN + 26,
	SPR_G2_RCT1_OPEN_BUTTON_2 = SPR_G2_BEGIN + 27,
	SPR_G2_RCT1_OPEN_BUTTON_3 = SPR_G2_BEGIN + 28,

	SPR_G2_TITLE_RESTART = SPR_G2_BEGIN + 29,
	SPR_G2_TITLE_STOP = SPR_G2_BEGIN + 30,
	SPR_G2_TITLE_PLAY = SPR_G2_BEGIN + 31,
	SPR_G2_TITLE_SKIP = SPR_G2_BEGIN + 32,

	SPR_G2_SANDBOX = SPR_G2_BEGIN + 33,

	SPR_G2_TAB_NEWS = SPR_G2_BEGIN + 58,
	SPR_G2_LOCKED = SPR_G2_BEGIN + 59,
	SPR_G2_MENU_MULTIPLAYER = SPR_G2_BEGIN + 60,

	SPR_G2_SORT = SPR_G2_BEGIN + 77,
	SPR_G2_COPY = SPR_G2_BEGIN + 78,
	SPR_G2_PASTE = SPR_G2_BEGIN + 79,
	SPR_G2_TAB_DISABLED = SPR_G2_BEGIN + 80,

	SPR_G2_COMPASS_NE = SPR_G2_BEGIN + 81,
	SPR_G2_COMPASS_SE = SPR_G2_BEGIN + 82,
	SPR_G2_COMPASS_SW = SPR_G2_BEGIN + 83,
	SPR_G2_COMPASS_NW = SPR_G2_BEGIN + 84,

	// 0x60000, chosen because it's a round hex number
	// of the last possible range of image ID values that is large enough to fit all csg1 sprites.
	SPR_CSG_BEGIN = 393216,

	SPR_CSG_EDGE_BRICK_BASE = SPR_CSG_BEGIN + 40506,
	SPR_CSG_EDGE_IRON_BASE = SPR_CSG_BEGIN + 40590,
	SPR_CSG_EDGE_RED_BASE = SPR_CSG_BEGIN + 40926,
	SPR_CSG_EDGE_YELLOW_BASE = SPR_CSG_BEGIN + 41030,
	SPR_CSG_EDGE_GREY_BASE = SPR_CSG_BEGIN + 41134,
	SPR_CSG_EDGE_PURPLE_BASE = SPR_CSG_BEGIN + 41238,
	SPR_CSG_EDGE_GREEN_BASE = SPR_CSG_BEGIN + 41342,
	SPR_CSG_EDGE_STONE_BROWN_BASE = SPR_CSG_BEGIN + 41446,
	SPR_CSG_EDGE_STONE_GREY_BASE = SPR_CSG_BEGIN + 41550,
	SPR_CSG_EDGE_SKYSCRAPER_A_BASE = SPR_CSG_BEGIN + 41654,
	SPR_CSG_EDGE_SKYSCRAPER_B_BASE = SPR_CSG_BEGIN + 41758,
};

#endif
