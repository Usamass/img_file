#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* button_1;
lv_obj_t * __button_1_label;
lv_obj_t* button_2;
lv_obj_t * __button_2_label;
lv_obj_t* label_1;


    void qmsd_button_1_create()
{
    button_1 = lv_btn_create(screen_main, NULL);
    __button_1_label = lv_label_create(button_1, NULL);
    lv_label_set_text(__button_1_label,qmsd_lang_get_trans("button_1","LED 1"));

    lv_obj_set_style_local_text_color(__button_1_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xc6, 0xc6, 0xc6));
    lv_obj_set_style_local_text_font(__button_1_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(button_1, 100, 40);
    lv_obj_set_pos(button_1, 43, 45);
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
    lv_obj_set_pos(button_2, 185, 45);
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
    void qmsd_label_1_create()
{
	label_1 = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(label_1,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(label_1,true);
	lv_obj_set_size(label_1, 129, 40);
//set label style

	lv_label_set_text(label_1, "");
	lv_label_set_align(label_1, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(label_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
#ifdef BLOCKLY_label_1_EVENT_HANDLER
	lv_obj_set_event_cb(label_1, __qmsd_label_1_cb);
#endif
    lv_obj_set_click(label_1,true);    
	if(label_1->coords.x2-label_1->coords.x1<129)
	{
		int x_offset=(129-(label_1->coords.x2-label_1->coords.x1))/2;
		lv_obj_set_style_local_pad_left(label_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(label_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(label_1->coords.y2-label_1->coords.y1<40)
	{
		int y_offset=(40-(label_1->coords.y2-label_1->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(label_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(label_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(label_1, 95, 140);
    qmsd_obj_set_id(label_1,"label_1");
}

static void screen_main_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(__button_1_label,qmsd_lang_get_trans("button_1","LED 1"));
    lv_label_set_text(__button_2_label,qmsd_lang_get_trans("button_2","LED 2"));
    lv_label_set_text(label_1,qmsd_lang_get_trans("label_1",""));
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
    qmsd_label_1_create();
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
