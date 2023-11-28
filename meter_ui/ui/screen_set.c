#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_set;
lv_obj_t* ima_set_bottom;
lv_obj_t* but_set_temp;
lv_obj_t * __but_set_temp_label;
lv_obj_t* but_set_time;
lv_obj_t * __but_set_time_label;
lv_obj_t* ima_set_mode;
lv_obj_t* lab_set_mode;
lv_obj_t* lab_set_sign;
lv_obj_t* ima_temp_com;
lv_obj_t* ima_set_up;
lv_obj_t* contlink_main;
lv_obj_t* ima_set_top;
lv_obj_t* ima_set_bot;


    
void qmsd_ima_set_bottom_create()
{
    ima_set_bottom = lv_img_create(screen_set, NULL);
    lv_img_set_src(ima_set_bottom, &imgscreen_set_bottom_png);
#ifdef BLOCKLY_ima_set_bottom_EVENT_HANDLER
    lv_obj_set_event_cb(ima_set_bottom, __qmsd_ima_set_bottom_cb);
#endif
    lv_obj_set_pos(ima_set_bottom, 0, 0);
    qmsd_obj_set_id(ima_set_bottom,"ima_set_bottom");
}
    void qmsd_but_set_temp_create()
{
    but_set_temp = lv_btn_create(screen_set, NULL);
    __but_set_temp_label = lv_label_create(but_set_temp, NULL);
    lv_label_set_text(__but_set_temp_label,qmsd_lang_get_trans("but_set_temp","temperature"));

    lv_obj_set_style_local_text_color(__but_set_temp_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(__but_set_temp_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(but_set_temp, 78, 24);
    lv_obj_set_pos(but_set_temp, 151, 71);
#ifdef BLOCKLY_but_set_temp_EVENT_HANDLER
    lv_obj_set_event_cb(but_set_temp, __qmsd_but_set_temp_cb);
#endif


    lv_obj_t* obj = but_set_temp;
    int part = LV_BTN_PART_MAIN;
//设置正常样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x2a, 0x13, 0x00));
    lv_obj_set_style_local_bg_grad_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x1e, 0x0e, 0x00));
    lv_obj_set_style_local_bg_grad_dir(obj,part,LV_STATE_DEFAULT,LV_GRAD_DIR_HOR);
    lv_obj_set_style_local_radius(obj,part,LV_STATE_DEFAULT,12);
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_border_opa(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_shadow_width(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_text_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(obj,part,LV_STATE_DEFAULT,&ali_font_16);

//设置正常样式结束

//设置按下样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_bg_grad_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_bg_grad_dir(obj,part,LV_STATE_PRESSED,LV_GRAD_DIR_HOR);
    lv_obj_set_style_local_radius(obj,part,LV_STATE_PRESSED,12);
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_border_opa(obj,part,LV_STATE_PRESSED,0);
    lv_obj_set_style_local_shadow_width(obj,part,LV_STATE_PRESSED,0);
    lv_obj_set_style_local_text_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(obj,part,LV_STATE_PRESSED,&ali_font_16);

//设置按下样式结束

//设置禁用样式
        lv_obj_set_style_local_border_color(obj,part,LV_STATE_DISABLED,LV_COLOR_MAKE(0xff, 0xff, 0xff));

//设置禁用样式结束
    lv_obj_set_style_local_outline_width(but_set_temp,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(but_set_temp,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(but_set_temp,"but_set_temp");
}
    void qmsd_but_set_time_create()
{
    but_set_time = lv_btn_create(screen_set, NULL);
    __but_set_time_label = lv_label_create(but_set_time, NULL);
    lv_label_set_text(__but_set_time_label,qmsd_lang_get_trans("but_set_time","time"));

    lv_obj_set_style_local_text_color(__but_set_time_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(__but_set_time_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(but_set_time, 78, 24);
    lv_obj_set_pos(but_set_time, 248, 71);
#ifdef BLOCKLY_but_set_time_EVENT_HANDLER
    lv_obj_set_event_cb(but_set_time, __qmsd_but_set_time_cb);
#endif


    lv_obj_t* obj = but_set_time;
    int part = LV_BTN_PART_MAIN;
//设置正常样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x2a, 0x13, 0x00));
    lv_obj_set_style_local_bg_grad_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x1e, 0x0e, 0x00));
    lv_obj_set_style_local_bg_grad_dir(obj,part,LV_STATE_DEFAULT,LV_GRAD_DIR_HOR);
    lv_obj_set_style_local_radius(obj,part,LV_STATE_DEFAULT,12);
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_border_opa(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_shadow_width(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_text_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(obj,part,LV_STATE_DEFAULT,&ali_font_16);

//设置正常样式结束

//设置按下样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_bg_grad_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_bg_grad_dir(obj,part,LV_STATE_PRESSED,LV_GRAD_DIR_HOR);
    lv_obj_set_style_local_radius(obj,part,LV_STATE_PRESSED,12);
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_border_opa(obj,part,LV_STATE_PRESSED,0);
    lv_obj_set_style_local_shadow_width(obj,part,LV_STATE_PRESSED,0);
    lv_obj_set_style_local_text_color(obj,part,LV_STATE_PRESSED,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(obj,part,LV_STATE_PRESSED,&ali_font_16);

//设置按下样式结束

//设置禁用样式
        lv_obj_set_style_local_border_color(obj,part,LV_STATE_DISABLED,LV_COLOR_MAKE(0xff, 0xff, 0xff));

//设置禁用样式结束
    lv_obj_set_style_local_outline_width(but_set_time,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(but_set_time,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(but_set_time,"but_set_time");
}
    
void qmsd_ima_set_mode_create()
{
    ima_set_mode = lv_img_create(screen_set, NULL);
    lv_img_set_src(ima_set_mode, &imgtop_bottom_button_png);
#ifdef BLOCKLY_ima_set_mode_EVENT_HANDLER
    lv_obj_set_event_cb(ima_set_mode, __qmsd_ima_set_mode_cb);
#endif
    lv_obj_set_pos(ima_set_mode, 115, 110);
    qmsd_obj_set_id(ima_set_mode,"ima_set_mode");
}
    void qmsd_lab_set_mode_create()
{
	lab_set_mode = lv_label_create(screen_set, NULL);
	lv_label_set_long_mode(lab_set_mode,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_set_mode,true);
	lv_obj_set_size(lab_set_mode, 83, 34);
//set label style
	lv_obj_set_style_local_text_color(lab_set_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xeb, 0xdd, 0xd3));

	lv_label_set_text(lab_set_mode, "Meter");
	lv_label_set_align(lab_set_mode, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_set_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_36);
#ifdef BLOCKLY_lab_set_mode_EVENT_HANDLER
	lv_obj_set_event_cb(lab_set_mode, __qmsd_lab_set_mode_cb);
#endif
	if(lab_set_mode->coords.x2-lab_set_mode->coords.x1<83)
	{
		int x_offset=(83-(lab_set_mode->coords.x2-lab_set_mode->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_set_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_set_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_set_mode->coords.y2-lab_set_mode->coords.y1<34)
	{
		int y_offset=(34-(lab_set_mode->coords.y2-lab_set_mode->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_set_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_set_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_set_mode, 198, 123);
    qmsd_obj_set_id(lab_set_mode,"lab_set_mode");
}
    void qmsd_lab_set_sign_create()
{
	lab_set_sign = lv_label_create(screen_set, NULL);
	lv_label_set_long_mode(lab_set_sign,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_set_sign,true);
	lv_obj_set_size(lab_set_sign, 146, 34);
//set label style
	lv_obj_set_style_local_text_color(lab_set_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_set_sign, "km/h");
	lv_label_set_align(lab_set_sign, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_set_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_36);
#ifdef BLOCKLY_lab_set_sign_EVENT_HANDLER
	lv_obj_set_event_cb(lab_set_sign, __qmsd_lab_set_sign_cb);
#endif
	if(lab_set_sign->coords.x2-lab_set_sign->coords.x1<146)
	{
		int x_offset=(146-(lab_set_sign->coords.x2-lab_set_sign->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_set_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_set_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_set_sign->coords.y2-lab_set_sign->coords.y1<34)
	{
		int y_offset=(34-(lab_set_sign->coords.y2-lab_set_sign->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_set_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_set_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_set_sign, 168, 387);
    qmsd_obj_set_id(lab_set_sign,"lab_set_sign");
}
    
void qmsd_ima_temp_com_create()
{
    ima_temp_com = lv_img_create(screen_set, NULL);
    lv_img_set_src(ima_temp_com, &imgtempareture_company_png);
#ifdef BLOCKLY_ima_temp_com_EVENT_HANDLER
    lv_obj_set_event_cb(ima_temp_com, __qmsd_ima_temp_com_cb);
#endif
    lv_obj_set_pos(ima_temp_com, 310, 245);
    qmsd_obj_set_id(ima_temp_com,"ima_temp_com");
}
    
void qmsd_ima_set_up_create()
{
    ima_set_up = lv_img_create(screen_set, NULL);
    lv_img_set_src(ima_set_up, &imgicon_up_png);
#ifdef BLOCKLY_ima_set_up_EVENT_HANDLER
    lv_obj_set_event_cb(ima_set_up, __qmsd_ima_set_up_cb);
#endif
    lv_obj_set_pos(ima_set_up, 230, 436);
    qmsd_obj_set_id(ima_set_up,"ima_set_up");
}
    void qmsd_contlink_main_create()
{
    screen_roller_build(screen_set);
    contlink_main = screen_roller;
    lv_obj_set_parent(contlink_main,screen_set);
    lv_obj_set_pos(contlink_main,164,178);
    lv_obj_set_size(contlink_main, 150, 200);
}
    
void qmsd_ima_set_top_create()
{
    ima_set_top = lv_img_create(screen_set, NULL);
    lv_img_set_src(ima_set_top, &imgtop_mask_png);
#ifdef BLOCKLY_ima_set_top_EVENT_HANDLER
    lv_obj_set_event_cb(ima_set_top, __qmsd_ima_set_top_cb);
#endif
    lv_obj_set_pos(ima_set_top, 175, 178);
    qmsd_obj_set_id(ima_set_top,"ima_set_top");
}
    
void qmsd_ima_set_bot_create()
{
    ima_set_bot = lv_img_create(screen_set, NULL);
    lv_img_set_src(ima_set_bot, &imgbottom_mask_png);
#ifdef BLOCKLY_ima_set_bot_EVENT_HANDLER
    lv_obj_set_event_cb(ima_set_bot, __qmsd_ima_set_bot_cb);
#endif
    lv_obj_set_pos(ima_set_bot, 175, 323);
    qmsd_obj_set_id(ima_set_bot,"ima_set_bot");
}

static void screen_set_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(__but_set_temp_label,qmsd_lang_get_trans("but_set_temp","temperature"));
    lv_label_set_text(__but_set_time_label,qmsd_lang_get_trans("but_set_time","time"));
    lv_label_set_text(lab_set_mode,qmsd_lang_get_trans("lab_set_mode","Meter"));
    lv_label_set_text(lab_set_sign,qmsd_lang_get_trans("lab_set_sign","km/h"));
*/
#ifdef BLOCKLY_screen_set_SCREEN_INIT
    __qmsd_screen_set_init();
#endif
}

static void screen_set_del_cb(lv_obj_t* obj,lv_event_t event)
{
    if(event == LV_EVENT_DELETE)
    {
        screen_set=NULL;
        qmsd_screen_remove("screen_set");
    }
}

void screen_set_build(void)
{
    if(screen_set) return;
    screen_set = lv_obj_create(NULL, NULL);
    lv_obj_qmsd_set_cb(screen_set, screen_set_qmsd_cb);
    lv_obj_set_style_local_bg_color(screen_set,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x10, 0x05, 0x00));

    qmsd_ima_set_bottom_create();
    qmsd_but_set_temp_create();
    qmsd_but_set_time_create();
    qmsd_ima_set_mode_create();
    qmsd_lab_set_mode_create();
    qmsd_lab_set_sign_create();
    qmsd_ima_temp_com_create();
    qmsd_ima_set_up_create();
    qmsd_contlink_main_create();
    qmsd_ima_set_top_create();
    qmsd_ima_set_bot_create();
    lv_obj_set_event_cb(screen_set,screen_set_del_cb);
    qmsd_screen_register(screen_set,"screen_set");
}

void screen_set_show(void)
{
    if(!screen_set)
    {
        screen_set_build();
    }
    lv_scr_load(screen_set);
}

void screen_set_delete(void)
{
    if(screen_set)
    {
        lv_obj_del(screen_set);
        screen_set = NULL;
    }
}
