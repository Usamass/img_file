#ifndef QM_UI_ENTRY_H
#define QM_UI_ENTRY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

#include "lvgl/lvgl.h"
#include "qmsd_lang.h"
#include "qmsd_gui.h"
LV_FONT_DECLARE(ali_font_16);
LV_FONT_DECLARE(ali_font_1);

LV_IMG_DECLARE(imgabstron_logo_jpeg);
LV_IMG_DECLARE(imglinux_logo_png);

/*
* declear screen_main
*/
extern lv_obj_t * screen_main;
extern lv_obj_t * button_1;
extern lv_obj_t * __button_1_label;
extern lv_obj_t * button_2;
extern lv_obj_t * __button_2_label;
extern lv_obj_t * led_1;
extern lv_obj_t * led_2;
extern lv_obj_t * bar_1;
extern lv_obj_t * switch_1;
void screen_main_build(void);
void screen_main_show(void);
void screen_main_delete(void);

extern lv_obj_t * g_kb;

void qmsd_ui_entry(void);
void qmsd_ui_loop(void);
lv_img_src_t *qmsd_get_img(const char *w_name);
lv_font_t *qmsd_get_font(const char *w_name);

void g_create_kb_ifneeded(void);
void g_show_kb(void);
#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*QM_UI_ENTRY_H*/