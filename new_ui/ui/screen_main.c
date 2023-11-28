#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* button_1;
lv_obj_t * __button_1_label;
lv_obj_t* button_2;
lv_obj_t * __button_2_label;
lv_obj_t* led_1;
lv_obj_t* led_2;
lv_obj_t* bar_1;
lv_obj_t* switch_1;


    void qmsd_button_1_create()
{
    button_1 = lv_btn_create(screen_main, NULL);
    __button_1_label = lv_label_create(button_1, NULL);
    lv_label_set_text(__button_1_label,qmsd_lang_get_trans("button_1","LED 1"));

    lv_obj_set_style_local_text_color(__button_1_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xc6, 0xc6, 0xc6));
    lv_obj_set_style_local_text_font(__button_1_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(button_1, 100, 40);
    lv_obj_set_pos(button_1, 43, 100);
#ifdef BLOCKLY_button_1_EVENT_HANDLER
    lv_obj_set_event_cb(button_1, __qmsd_button_1_cb);
#endif


    lv_obj_t* obj = button_1;
    int part = LV_BTN_PART_MAIN;
//设置正常样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x0a, 0xd4, 0xff));
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

//设置正常样式结束


    lv_obj_set_style_local_outline_width(button_1,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(button_1,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(button_1,"button_1");
}
    void qmsd_button_2_create()
{
    button_2 = lv_btn_create(screen_main, NULL);
    __button_2_label = lv_label_create(button_2, NULL);
    lv_label_set_text(__button_2_label,qmsd_lang_get_trans("button_2","LED 2"));

    lv_obj_set_style_local_text_color(__button_2_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xc6, 0xc6, 0xc6));
    lv_obj_set_style_local_text_font(__button_2_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(button_2, 100, 40);
    lv_obj_set_pos(button_2, 185, 100);
#ifdef BLOCKLY_button_2_EVENT_HANDLER
    lv_obj_set_event_cb(button_2, __qmsd_button_2_cb);
#endif


    lv_obj_t* obj = button_2;
    int part = LV_BTN_PART_MAIN;
//设置正常样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x0a, 0xd4, 0xff));
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

//设置正常样式结束


    lv_obj_set_style_local_outline_width(button_2,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(button_2,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(button_2,"button_2");
}
    void qmsd_led_1_create()
{
    led_1 = lv_led_create(screen_main, NULL);
    lv_obj_set_size(led_1, 40, 40);
    lv_obj_set_pos(led_1, 75, 180);
    //set led style
    lv_obj_set_style_local_bg_color(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0xFF));
	lv_obj_set_style_local_bg_grad_color(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0xFF));
	lv_obj_set_style_local_border_color(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0xFF));
	lv_obj_set_style_local_radius(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
 	lv_obj_set_style_local_shadow_color(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0xFF));
	lv_obj_set_style_local_shadow_width(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,5);
    lv_obj_set_style_local_border_width(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,3);
	lv_obj_set_style_local_border_opa(led_1,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_OPA_30); 

    qmsd_obj_set_id(led_1,"led_1");
}
    void qmsd_led_2_create()
{
    led_2 = lv_led_create(screen_main, NULL);
    lv_obj_set_size(led_2, 40, 40);
    lv_obj_set_pos(led_2, 212, 180);
    //set led style
    lv_obj_set_style_local_bg_color(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x00, 0x1e));
	lv_obj_set_style_local_bg_grad_color(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x00, 0x1e));
	lv_obj_set_style_local_border_color(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x00, 0x1e));
	lv_obj_set_style_local_radius(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
 	lv_obj_set_style_local_shadow_color(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x00, 0x1e));
	lv_obj_set_style_local_shadow_width(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,5);
    lv_obj_set_style_local_border_width(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,3);
	lv_obj_set_style_local_border_opa(led_2,LV_LED_PART_MAIN,LV_STATE_DEFAULT,LV_OPA_30); 

    qmsd_obj_set_id(led_2,"led_2");
}
    void qmsd_bar_1_create()
{
	bar_1 = lv_bar_create(screen_main, NULL);
	lv_obj_set_size(bar_1, 200, 40);
    lv_obj_set_pos(bar_1, 59, 252);
	lv_bar_set_anim_time(bar_1, 1000);
	lv_bar_set_value(bar_1, 0, LV_ANIM_ON);

/*Create a bar, an indicator and a knob style*/
	//set main part style
    lv_obj_set_style_local_bg_color(bar_1,LV_BAR_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x8f, 0x8f, 0x8f));
	lv_obj_set_style_local_bg_grad_color(bar_1,LV_BAR_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x8f, 0x8f, 0x8f));
    lv_obj_set_style_local_pad_top(bar_1,LV_BAR_PART_BG,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_pad_bottom(bar_1,LV_BAR_PART_BG,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_pad_left(bar_1,LV_BAR_PART_BG,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_pad_right(bar_1,LV_BAR_PART_BG,LV_STATE_DEFAULT,0);
	//set indic style
    lv_obj_set_style_local_bg_color(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x1a, 0x1a, 0x1a));
	lv_obj_set_style_local_bg_grad_color(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x1a, 0x1a, 0x1a));
    lv_obj_set_style_local_radius(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
    lv_obj_set_style_local_pad_top(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_pad_bottom(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_pad_left(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_pad_right(bar_1, LV_BAR_PART_INDIC,LV_STATE_DEFAULT,0);
    qmsd_obj_set_id(bar_1,"bar_1");
}
    void qmsd_switch_1_create()
{
    switch_1 = lv_switch_create(screen_main, NULL);
    lv_obj_set_size(switch_1, 83, 26);
    lv_obj_set_pos(switch_1, 121, 34);
    if(0 == 0) {
    lv_switch_off(switch_1, LV_ANIM_OFF);
    } else {
    lv_switch_on(switch_1, LV_ANIM_OFF);
    }
    //set switch bg style
    lv_obj_set_style_local_bg_color(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xCC, 0xCC, 0xCC));
    lv_obj_set_style_local_bg_grad_color(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xCC, 0xCC, 0xCC));
    lv_obj_set_style_local_pad_top(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_bottom(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_left(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_right(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    //set switch indic style
    lv_obj_set_style_local_bg_color(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x02, 0x88, 0xFB));
    lv_obj_set_style_local_bg_grad_color(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x02, 0x88, 0xFB));
    lv_obj_set_style_local_radius(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
    lv_obj_set_style_local_pad_top(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_bottom(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_left(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_right(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    //set switch knob style
    lv_obj_set_style_local_radius(switch_1,LV_SWITCH_PART_KNOB,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
#ifdef BLOCKLY_switch_1_EVENT_HANDLER
    lv_obj_set_event_cb(switch_1, __qmsd_switch_1_cb);
#endif
    qmsd_obj_set_id(switch_1,"switch_1");
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
    lv_obj_set_style_local_bg_color(screen_main,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x1a, 0x1a, 0x1a));

    qmsd_button_1_create();
    qmsd_button_2_create();
    qmsd_led_1_create();
    qmsd_led_2_create();
    qmsd_bar_1_create();
    qmsd_switch_1_create();
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
