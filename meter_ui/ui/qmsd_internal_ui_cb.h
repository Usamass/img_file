#ifndef __QMSD_INTERNEL_UI_CB_H
#define __QMSD_INTERNEL_UI_CB_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"

#define BLOCKLY_screen_main_SCREEN_INIT
void __qmsd_screen_main_init(void);

#define BLOCKLY_screen_set_SCREEN_INIT
void __qmsd_screen_set_init(void);

#define BLOCKLY_ima_ma_drie_EVENT_HANDLER
void __qmsd_ima_ma_drie_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_ima_ma_stew_EVENT_HANDLER
void __qmsd_ima_ma_stew_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_ima_ma_bake_EVENT_HANDLER
void __qmsd_ima_ma_bake_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_ima_ma_airf_EVENT_HANDLER
void __qmsd_ima_ma_airf_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_ima_ma_stea_EVENT_HANDLER
void __qmsd_ima_ma_stea_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_screen_run_SCREEN_INIT
void __qmsd_screen_run_init(void);

#define BLOCKLY_lab_set_sign_EVENT_HANDLER
void __qmsd_lab_set_sign_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_lab_run_sign_EVENT_HANDLER
void __qmsd_lab_run_sign_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_but_set_time_EVENT_HANDLER
void __qmsd_but_set_time_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_but_set_temp_EVENT_HANDLER
void __qmsd_but_set_temp_cb(lv_obj_t* obj,lv_event_t event);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif //__QMSD_INTERNEL_UI_CB_H