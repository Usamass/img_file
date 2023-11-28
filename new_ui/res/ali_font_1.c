/*******************************************************************************
 * Size: 1 px
 * Bpp: 4
 * Opts: --font /root/hmi_esp32/hmi/aliph.ttf -r 0x20-0x7F --symbols 启明 --size 1 --format lvgl --bpp 4 --no-compress -o ali_font_1.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ALI_FONT_1
#define ALI_FONT_1 1
#endif

#if ALI_FONT_1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x10,

    /* U+0022 "\"" */
    0x10,

    /* U+0023 "#" */
    0x40,

    /* U+0024 "$" */
    0x3, 0x0,

    /* U+0025 "%" */
    0x30,

    /* U+0026 "&" */
    0x40,

    /* U+0027 "'" */
    0x0,

    /* U+0028 "(" */
    0x10,

    /* U+0029 ")" */
    0x10,

    /* U+002A "*" */
    0x10,

    /* U+002B "+" */
    0x20,

    /* U+002C "," */
    0x0,

    /* U+002D "-" */
    0x0,

    /* U+002E "." */
    0x0,

    /* U+002F "/" */
    0x1,

    /* U+0030 "0" */
    0x30,

    /* U+0031 "1" */
    0x10,

    /* U+0032 "2" */
    0x20,

    /* U+0033 "3" */
    0x20,

    /* U+0034 "4" */
    0x20,

    /* U+0035 "5" */
    0x20,

    /* U+0036 "6" */
    0x30,

    /* U+0037 "7" */
    0x20,

    /* U+0038 "8" */
    0x30,

    /* U+0039 "9" */
    0x30,

    /* U+003A ":" */
    0x0,

    /* U+003B ";" */
    0x0,

    /* U+003C "<" */
    0x2,

    /* U+003D "=" */
    0x20,

    /* U+003E ">" */
    0x2,

    /* U+003F "?" */
    0x20,

    /* U+0040 "@" */
    0x43,

    /* U+0041 "A" */
    0x20,

    /* U+0042 "B" */
    0x40,

    /* U+0043 "C" */
    0x20,

    /* U+0044 "D" */
    0x40,

    /* U+0045 "E" */
    0x30,

    /* U+0046 "F" */
    0x20,

    /* U+0047 "G" */
    0x30,

    /* U+0048 "H" */
    0x30,

    /* U+0049 "I" */
    0x10,

    /* U+004A "J" */
    0x1,

    /* U+004B "K" */
    0x30,

    /* U+004C "L" */
    0x20,

    /* U+004D "M" */
    0x40,

    /* U+004E "N" */
    0x40,

    /* U+004F "O" */
    0x40,

    /* U+0050 "P" */
    0x30,

    /* U+0051 "Q" */
    0x40,

    /* U+0052 "R" */
    0x30,

    /* U+0053 "S" */
    0x20,

    /* U+0054 "T" */
    0x20,

    /* U+0055 "U" */
    0x20,

    /* U+0056 "V" */
    0x20,

    /* U+0057 "W" */
    0x40,

    /* U+0058 "X" */
    0x30,

    /* U+0059 "Y" */
    0x20,

    /* U+005A "Z" */
    0x30,

    /* U+005B "[" */
    0x10,

    /* U+005C "\\" */
    0x10,

    /* U+005D "]" */
    0x10,

    /* U+005E "^" */
    0x10,

    /* U+005F "_" */
    0x10,

    /* U+0060 "`" */
    0x0,

    /* U+0061 "a" */
    0x30,

    /* U+0062 "b" */
    0x30,

    /* U+0063 "c" */
    0x20,

    /* U+0064 "d" */
    0x30,

    /* U+0065 "e" */
    0x30,

    /* U+0066 "f" */
    0x20,

    /* U+0067 "g" */
    0x40,

    /* U+0068 "h" */
    0x30,

    /* U+0069 "i" */
    0x10,

    /* U+006A "j" */
    0x1,

    /* U+006B "k" */
    0x30,

    /* U+006C "l" */
    0x10,

    /* U+006D "m" */
    0x40,

    /* U+006E "n" */
    0x30,

    /* U+006F "o" */
    0x30,

    /* U+0070 "p" */
    0x30,

    /* U+0071 "q" */
    0x30,

    /* U+0072 "r" */
    0x10,

    /* U+0073 "s" */
    0x20,

    /* U+0074 "t" */
    0x20,

    /* U+0075 "u" */
    0x20,

    /* U+0076 "v" */
    0x20,

    /* U+0077 "w" */
    0x40,

    /* U+0078 "x" */
    0x20,

    /* U+0079 "y" */
    0x20,

    /* U+007A "z" */
    0x20,

    /* U+007B "{" */
    0x10,

    /* U+007C "|" */
    0x10,

    /* U+007D "}" */
    0x10,

    /* U+007E "~" */
    0x0,

    /* U+542F "启" */
    0x40,

    /* U+660E "明" */
    0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 4, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 9, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5, .adv_w = 13, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 4, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 7, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 7, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 8, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 6, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 9, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 9, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 7, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 14, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 33, .adv_w = 11, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 11, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 11, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 11, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 4, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 4, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 13, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 12, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 12, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 12, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 11, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 14, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 8, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 63, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 64, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 65, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 4, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 4, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 15, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 10, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 13, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 8, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 3, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 5, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 9, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 16, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x11df
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 21551, .range_length = 4576, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 3,
    3, 8,
    3, 13,
    3, 15,
    8, 3,
    8, 8,
    8, 13,
    8, 15,
    9, 75,
    13, 3,
    13, 8,
    13, 18,
    13, 24,
    13, 26,
    15, 3,
    15, 8,
    15, 18,
    15, 24,
    15, 26,
    16, 16,
    18, 13,
    18, 15,
    18, 27,
    18, 28,
    24, 13,
    24, 15,
    24, 27,
    24, 28,
    27, 18,
    27, 24,
    28, 18,
    28, 24,
    34, 3,
    34, 8,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 71,
    34, 77,
    34, 85,
    34, 87,
    34, 90,
    35, 36,
    35, 40,
    35, 48,
    35, 50,
    35, 53,
    35, 55,
    35, 57,
    35, 58,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 59,
    37, 66,
    38, 75,
    39, 13,
    39, 15,
    39, 34,
    39, 66,
    39, 73,
    39, 76,
    40, 55,
    40, 58,
    43, 43,
    44, 34,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 53,
    44, 54,
    44, 55,
    44, 56,
    44, 58,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 77,
    44, 80,
    44, 82,
    44, 84,
    44, 85,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 87,
    45, 88,
    45, 90,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 59,
    48, 66,
    49, 13,
    49, 15,
    49, 34,
    49, 53,
    49, 55,
    49, 56,
    49, 57,
    49, 58,
    49, 59,
    49, 66,
    50, 13,
    50, 15,
    50, 34,
    50, 43,
    50, 53,
    50, 55,
    50, 56,
    50, 57,
    50, 58,
    50, 59,
    50, 66,
    51, 36,
    51, 40,
    51, 48,
    51, 50,
    51, 53,
    51, 54,
    51, 55,
    51, 56,
    51, 57,
    51, 58,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    51, 85,
    51, 86,
    51, 87,
    51, 89,
    51, 90,
    52, 13,
    52, 15,
    52, 52,
    52, 53,
    52, 55,
    52, 56,
    52, 58,
    52, 85,
    52, 87,
    52, 88,
    52, 89,
    52, 90,
    53, 3,
    53, 8,
    53, 13,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 50,
    53, 52,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 74,
    53, 75,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    54, 57,
    54, 89,
    55, 13,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 52,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 73,
    55, 76,
    55, 80,
    55, 82,
    55, 84,
    55, 87,
    55, 90,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 36,
    56, 40,
    56, 48,
    56, 50,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 84,
    57, 34,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 53,
    57, 54,
    57, 55,
    57, 56,
    57, 58,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 77,
    57, 80,
    57, 82,
    57, 84,
    57, 85,
    57, 86,
    57, 87,
    57, 88,
    57, 90,
    58, 3,
    58, 8,
    58, 13,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 48,
    58, 50,
    58, 52,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 73,
    58, 74,
    58, 76,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    60, 75,
    66, 53,
    66, 55,
    66, 58,
    66, 87,
    66, 88,
    66, 90,
    67, 13,
    67, 15,
    67, 53,
    67, 55,
    67, 56,
    67, 57,
    67, 58,
    67, 87,
    67, 89,
    67, 90,
    70, 13,
    70, 15,
    70, 53,
    70, 58,
    70, 75,
    71, 3,
    71, 8,
    71, 10,
    71, 11,
    71, 13,
    71, 15,
    71, 32,
    71, 53,
    71, 55,
    71, 56,
    71, 57,
    71, 58,
    71, 62,
    71, 66,
    71, 68,
    71, 69,
    71, 70,
    71, 71,
    71, 72,
    71, 73,
    71, 74,
    71, 75,
    71, 76,
    71, 77,
    71, 80,
    71, 82,
    71, 84,
    71, 85,
    71, 94,
    73, 53,
    73, 58,
    73, 87,
    73, 90,
    74, 3,
    74, 8,
    74, 10,
    74, 32,
    74, 53,
    74, 62,
    74, 94,
    75, 53,
    76, 53,
    76, 54,
    76, 56,
    76, 66,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 77,
    76, 80,
    76, 82,
    76, 86,
    77, 71,
    77, 87,
    77, 88,
    77, 90,
    78, 53,
    78, 58,
    78, 87,
    78, 90,
    79, 53,
    79, 58,
    79, 87,
    79, 90,
    80, 13,
    80, 15,
    80, 53,
    80, 55,
    80, 56,
    80, 57,
    80, 58,
    80, 87,
    80, 89,
    80, 90,
    81, 13,
    81, 15,
    81, 53,
    81, 55,
    81, 56,
    81, 57,
    81, 58,
    81, 87,
    81, 89,
    81, 90,
    82, 53,
    82, 58,
    82, 75,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 80,
    83, 82,
    83, 85,
    84, 53,
    84, 55,
    84, 56,
    84, 57,
    84, 58,
    84, 87,
    84, 89,
    84, 90,
    85, 71,
    86, 53,
    86, 58,
    87, 13,
    87, 15,
    87, 53,
    87, 57,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    88, 53,
    88, 57,
    88, 66,
    89, 53,
    89, 54,
    89, 56,
    89, 66,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 77,
    89, 80,
    89, 82,
    89, 86,
    90, 13,
    90, 15,
    90, 53,
    90, 57,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 80,
    90, 82,
    91, 53,
    92, 73,
    92, 75,
    92, 76
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -1, -1, -3, -3, -1, -1, -3, -3,
    1, -3, -3, -2, -1, -1, -3, -3,
    -2, -1, -1, -2, -2, -2, -2, -2,
    -3, -3, -2, -2, -1, -1, -1, -1,
    -2, -2, 0, 0, 0, 0, -1, 0,
    -1, -1, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    -1, -1, 0, -1, 0, 0, 0, -1,
    0, -1, 0, -3, -3, -1, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, 0, -1,
    -1, -1, -1, -2, -2, 0, -1, -1,
    -1, -1, -1, 0, -1, -1, -2, -1,
    0, -1, -1, -1, 0, -1, 0, 0,
    0, -1, 0, -1, -3, -3, -1, 0,
    0, 0, -1, 0, -1, -1, -1, -1,
    0, 0, -1, 0, 0, 0, -1, 0,
    -1, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -1, 0,
    0, 0, 0, 0, -1, -1, -1, -1,
    -1, 0, 0, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, 0, -1, -1,
    -1, 0, 0, 0, -2, -2, -1, -1,
    -1, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -1, -1, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, 0, -1, -1,
    -1, -1, 0, 0, -2, -2, -1, -1,
    -1, -1, -1, -1, -1, 0, -2, -1,
    -1, -1, 0, -1, 0, 0, 0, -1,
    -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, 0, 0, 0, 0,
    1, -1, 0, -1, 0, 0, 0, -1,
    -1, -1, 0, 0, -1, -1, 0, 0,
    0, 0, 0, -1, -1, 0, 0, 0,
    0, 1, 0, 0, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -1, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, 0, -1, -1, 0, 0, -1,
    -1, -1, 0, 0, -1, -1, 0, 0,
    0, -1, -1, -1, 0, 0, -1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, -1, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, -1, 0,
    0, 0, 0, -1, 0, -1, -1, -1,
    -1, -1, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, -1, -1, -1, 0, 0, 0,
    0, 0, -1, 0, 1, 0
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 486,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ali_font_1 = {
#else
lv_font_t ali_font_1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 3,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ALI_FONT_1*/

