#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* button_1;
lv_obj_t * __button_1_label;
lv_obj_t* button_2;
lv_obj_t * __button_2_label;


    void qmsd_button_1_create()
{
    button_1 = lv_btn_create(screen_main, NULL);
    __button_1_label = lv_label_create(button_1, NULL);
    lv_label_set_text(__button_1_label,qmsd_lang_get_trans("button_1","LED 1"));

    lv_obj_set_style_local_text_font(__button_1_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(button_1, 100, 40);
    lv_obj_set_pos(button_1, 43, 100);
#ifdef BLOCKLY_button_1_EVENT_HANDLER
    lv_obj_set_event_cb(button_1, __qmsd_button_1_cb);
#endif


    lv_obj_t* obj = button_1;
    int part = LV_BTN_PART_MAIN;


    lv_obj_set_style_local_outline_width(button_1,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(button_1,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(button_1,"button_1");
}
    void qmsd_button_2_create()
{
    button_2 = lv_btn_create(screen_main, NULL);
    __button_2_label = lv_label_create(button_2, NULL);
    lv_label_set_text(__button_2_label,qmsd_lang_get_trans("button_2","LED 2"));

    lv_obj_set_style_local_text_font(__button_2_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(button_2, 100, 40);
    lv_obj_set_pos(button_2, 185, 100);
#ifdef BLOCKLY_button_2_EVENT_HANDLER
    lv_obj_set_event_cb(button_2, __qmsd_button_2_cb);
#endif


    lv_obj_t* obj = button_2;
    int part = LV_BTN_PART_MAIN;


    lv_obj_set_style_local_outline_width(button_2,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(button_2,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(button_2,"button_2");
}

static void screen_main_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(__button_1_label,qmsd_lang_get_trans("button_1","LED 1"));
    lv_label_set_text(__button_2_label,qmsd_lang_get_trans("button_2","LED 2"));
*/
#ifdef BLOCKLY_screen_main_SCREEN_INIT
    __qmsd_screen_main_init();
#endif
}

static void screen_main_del_cb(lv_obj_t* obj,lv_event_t event)
{
    if(event == LV_EVENT_DELETE)
    {
        screen_main=NULL;
        qmsd_screen_remove("screen_main");
    }
}

void screen_main_build(void)
{
    if(screen_main) return;
    screen_main = lv_obj_create(NULL, NULL);
    lv_obj_qmsd_set_cb(screen_main, screen_main_qmsd_cb);
    lv_obj_set_style_local_bg_color(screen_main,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x1E, 0x38, 0x4D));

    qmsd_button_1_create();
    qmsd_button_2_create();
    lv_obj_set_event_cb(screen_main,screen_main_del_cb);
    qmsd_screen_register(screen_main,"screen_main");
}

void screen_main_show(void)
{
    if(!screen_main)
    {
        screen_main_build();
    }
    lv_scr_load(screen_main);
}

void screen_main_delete(void)
{
    if(screen_main)
    {
        lv_obj_del(screen_main);
        screen_main = NULL;
    }
}
