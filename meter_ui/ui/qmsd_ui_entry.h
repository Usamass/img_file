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
LV_FONT_DECLARE(ali_font_36);
LV_FONT_DECLARE(ali_font_40);
LV_FONT_DECLARE(ali_font_88);
LV_FONT_DECLARE(ali_font_76);
LV_FONT_DECLARE(ali_font_78);

LV_IMG_DECLARE(imgtest_png);
LV_IMG_DECLARE(imgmain_small_stew_png);
LV_IMG_DECLARE(imgmain_small_dired_fruit_png);
LV_IMG_DECLARE(imgmain_bottom_on_png);
LV_IMG_DECLARE(imgmain_bottom_off_png);
LV_IMG_DECLARE(imgmain_water_1_png);
LV_IMG_DECLARE(imgmain_ma_sign_png);
LV_IMG_DECLARE(imgmain_bottom_png);
LV_IMG_DECLARE(imgtop_mask_png);
LV_IMG_DECLARE(imgbottom_mask_png);
LV_IMG_DECLARE(imgaaa_png);
LV_IMG_DECLARE(imgmain_dried_fruit_png);
LV_IMG_DECLARE(imgmain_small_dried_fruit_png);
LV_IMG_DECLARE(imgmain_air_fry_png);
LV_IMG_DECLARE(imgmain_small_bake_png);
LV_IMG_DECLARE(imgmain_small_air_fry_png);
LV_IMG_DECLARE(imgmain_small_steamed_png);
LV_IMG_DECLARE(imgmain_dired_fruit_png);
LV_IMG_DECLARE(imgmain_stew_png);
LV_IMG_DECLARE(imgmain_steamed_png);
LV_IMG_DECLARE(imgmain_bake_png);
LV_IMG_DECLARE(imgmain_water_png);
LV_IMG_DECLARE(imgmain_wifi_png);
LV_IMG_DECLARE(imgrun_minute_png);
LV_IMG_DECLARE(imgequipment_running_png);
LV_IMG_DECLARE(imgset_tempareture_on_png);
LV_IMG_DECLARE(imgtop_bottom_button_png);
LV_IMG_DECLARE(imgtempareture_company_png);
LV_IMG_DECLARE(imgicon_up_png);
LV_IMG_DECLARE(imgminute_company_png);
LV_IMG_DECLARE(imgset_time_on_png);
LV_IMG_DECLARE(imgset_tempareture_off_png);
LV_IMG_DECLARE(imgscreen_set_bottom_png);

/*
* declear screen_main
*/
extern lv_obj_t * screen_main;
extern lv_obj_t * image_1929;
extern lv_obj_t * ima_ma_bottom;
extern lv_obj_t * ima_ma_drie;
extern lv_obj_t * ima_ma_stew;
extern lv_obj_t * ima_ma_airf;
extern lv_obj_t * ima_ma_stea;
extern lv_obj_t * ima_ma_sign;
extern lv_obj_t * ima_ma_wifi;
extern lv_obj_t * ima_ma_water;
extern lv_obj_t * ima_ma_bake;
extern lv_obj_t * lab_ma_min;
extern lv_obj_t * lab_ma_scr;
extern lv_obj_t * lab_ma_hour;
extern lv_obj_t * ima_ma_b_mi;
extern lv_obj_t * ima_ma_b_ri;
extern lv_obj_t * ima_ma_b_riri;
extern lv_obj_t * ima_ma_b_le;
extern lv_obj_t * ima_ma_b_lele;
extern lv_obj_t * arc_ma_bot;
void screen_main_build(void);
void screen_main_show(void);
void screen_main_delete(void);
/*
* declear screen_set
*/
extern lv_obj_t * screen_set;
extern lv_obj_t * ima_set_bottom;
extern lv_obj_t * but_set_temp;
extern lv_obj_t * __but_set_temp_label;
extern lv_obj_t * but_set_time;
extern lv_obj_t * __but_set_time_label;
extern lv_obj_t * ima_set_mode;
extern lv_obj_t * lab_set_mode;
extern lv_obj_t * lab_set_sign;
extern lv_obj_t * ima_temp_com;
extern lv_obj_t * ima_set_up;
extern lv_obj_t * contlink_main;
extern lv_obj_t * ima_set_top;
extern lv_obj_t * ima_set_bot;
void screen_set_build(void);
void screen_set_show(void);
void screen_set_delete(void);
/*
* declear screen_run
*/
extern lv_obj_t * screen_run;
extern lv_obj_t * ima_run_bottom;
extern lv_obj_t * lab_run_sign;
extern lv_obj_t * ima_run_mode;
extern lv_obj_t * lab_run_mode;
extern lv_obj_t * but_run_run;
extern lv_obj_t * __but_run_run_label;
extern lv_obj_t * ima_run_com;
extern lv_obj_t * lab_run_hour;
extern lv_obj_t * lab_run_min;
extern lv_obj_t * lab_run_scr;
void screen_run_build(void);
void screen_run_show(void);
void screen_run_delete(void);
/*
* declear screen_roller
*/
extern lv_obj_t * screen_roller;
extern lv_obj_t * label_78;
extern lv_obj_t * label_82;
extern lv_obj_t * roller_006e;
extern lv_obj_t * lab_dd89;
lv_obj_t* screen_roller_build(lv_obj_t* parent);
void screen_roller_show(void);
void screen_roller_delete(void);

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