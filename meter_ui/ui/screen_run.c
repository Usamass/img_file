#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_run;
lv_obj_t* ima_run_bottom;
lv_obj_t* lab_run_sign;
lv_obj_t* ima_run_mode;
lv_obj_t* lab_run_mode;
lv_obj_t* but_run_run;
lv_obj_t * __but_run_run_label;
lv_obj_t* ima_run_com;
lv_obj_t* lab_run_hour;
lv_obj_t* lab_run_min;
lv_obj_t* lab_run_scr;


    
void qmsd_ima_run_bottom_create()
{
    ima_run_bottom = lv_img_create(screen_run, NULL);
    lv_img_set_src(ima_run_bottom, &imgscreen_set_bottom_png);
#ifdef BLOCKLY_ima_run_bottom_EVENT_HANDLER
    lv_obj_set_event_cb(ima_run_bottom, __qmsd_ima_run_bottom_cb);
#endif
    lv_obj_set_pos(ima_run_bottom, 0, 0);
    qmsd_obj_set_id(ima_run_bottom,"ima_run_bottom");
}
    void qmsd_lab_run_sign_create()
{
	lab_run_sign = lv_label_create(screen_run, NULL);
	lv_label_set_long_mode(lab_run_sign,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_run_sign,true);
	lv_obj_set_size(lab_run_sign, 146, 34);
//set label style
	lv_obj_set_style_local_text_color(lab_run_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_run_sign, "time left");
	lv_label_set_align(lab_run_sign, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_run_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_36);
#ifdef BLOCKLY_lab_run_sign_EVENT_HANDLER
	lv_obj_set_event_cb(lab_run_sign, __qmsd_lab_run_sign_cb);
#endif
	if(lab_run_sign->coords.x2-lab_run_sign->coords.x1<146)
	{
		int x_offset=(146-(lab_run_sign->coords.x2-lab_run_sign->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_run_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_run_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_run_sign->coords.y2-lab_run_sign->coords.y1<34)
	{
		int y_offset=(34-(lab_run_sign->coords.y2-lab_run_sign->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_run_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_run_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_run_sign, 168, 387);
    qmsd_obj_set_id(lab_run_sign,"lab_run_sign");
}
    
void qmsd_ima_run_mode_create()
{
    ima_run_mode = lv_img_create(screen_run, NULL);
    lv_img_set_src(ima_run_mode, &imgtop_bottom_button_png);
#ifdef BLOCKLY_ima_run_mode_EVENT_HANDLER
    lv_obj_set_event_cb(ima_run_mode, __qmsd_ima_run_mode_cb);
#endif
    lv_obj_set_pos(ima_run_mode, 115, 110);
    qmsd_obj_set_id(ima_run_mode,"ima_run_mode");
}
    void qmsd_lab_run_mode_create()
{
	lab_run_mode = lv_label_create(screen_run, NULL);
	lv_label_set_long_mode(lab_run_mode,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_run_mode,true);
	lv_obj_set_size(lab_run_mode, 83, 34);
//set label style
	lv_obj_set_style_local_text_color(lab_run_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xeb, 0xdd, 0xd3));

	lv_label_set_text(lab_run_mode, "steam");
	lv_label_set_align(lab_run_mode, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_run_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_36);
#ifdef BLOCKLY_lab_run_mode_EVENT_HANDLER
	lv_obj_set_event_cb(lab_run_mode, __qmsd_lab_run_mode_cb);
#endif
	if(lab_run_mode->coords.x2-lab_run_mode->coords.x1<83)
	{
		int x_offset=(83-(lab_run_mode->coords.x2-lab_run_mode->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_run_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_run_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_run_mode->coords.y2-lab_run_mode->coords.y1<34)
	{
		int y_offset=(34-(lab_run_mode->coords.y2-lab_run_mode->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_run_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_run_mode,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_run_mode, 198, 123);
    qmsd_obj_set_id(lab_run_mode,"lab_run_mode");
}
    void qmsd_but_run_run_create()
{
    but_run_run = lv_btn_create(screen_run, NULL);
    __but_run_run_label = lv_label_create(but_run_run, NULL);
    lv_label_set_text(__but_run_run_label,qmsd_lang_get_trans("but_run_run","running"));

    lv_obj_set_style_local_text_color(__but_run_run_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_text_font(__but_run_run_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(but_run_run, 78, 24);
    lv_obj_set_pos(but_run_run, 201, 71);
#ifdef BLOCKLY_but_run_run_EVENT_HANDLER
    lv_obj_set_event_cb(but_run_run, __qmsd_but_run_run_cb);
#endif


    lv_obj_t* obj = but_run_run;
    int part = LV_BTN_PART_MAIN;
//设置正常样式
        lv_obj_set_style_local_bg_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_bg_grad_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
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
    lv_obj_set_style_local_outline_width(but_run_run,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(but_run_run,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
    qmsd_obj_set_id(but_run_run,"but_run_run");
}
    
void qmsd_ima_run_com_create()
{
    ima_run_com = lv_img_create(screen_run, NULL);
    lv_img_set_src(ima_run_com, &imgrun_minute_png);
#ifdef BLOCKLY_ima_run_com_EVENT_HANDLER
    lv_obj_set_event_cb(ima_run_com, __qmsd_ima_run_com_cb);
#endif
    lv_obj_set_pos(ima_run_com, 379, 224);
    qmsd_obj_set_id(ima_run_com,"ima_run_com");
}
    void qmsd_lab_run_hour_create()
{
	lab_run_hour = lv_label_create(screen_run, NULL);
	lv_label_set_long_mode(lab_run_hour,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_run_hour,true);
	lv_obj_set_size(lab_run_hour, 122, 71);
//set label style
	lv_obj_set_style_local_text_color(lab_run_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));

	lv_label_set_text(lab_run_hour, "03");
	lv_label_set_align(lab_run_hour, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_run_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_88);
#ifdef BLOCKLY_lab_run_hour_EVENT_HANDLER
	lv_obj_set_event_cb(lab_run_hour, __qmsd_lab_run_hour_cb);
#endif
	if(lab_run_hour->coords.x2-lab_run_hour->coords.x1<122)
	{
		int x_offset=(122-(lab_run_hour->coords.x2-lab_run_hour->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_run_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_run_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_run_hour->coords.y2-lab_run_hour->coords.y1<71)
	{
		int y_offset=(71-(lab_run_hour->coords.y2-lab_run_hour->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_run_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_run_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_run_hour, 124, 214);
    qmsd_obj_set_id(lab_run_hour,"lab_run_hour");
}
    void qmsd_lab_run_min_create()
{
	lab_run_min = lv_label_create(screen_run, NULL);
	lv_label_set_long_mode(lab_run_min,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_run_min,true);
	lv_obj_set_size(lab_run_min, 122, 71);
//set label style
	lv_obj_set_style_local_text_color(lab_run_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));

	lv_label_set_text(lab_run_min, "30");
	lv_label_set_align(lab_run_min, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_run_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_88);
#ifdef BLOCKLY_lab_run_min_EVENT_HANDLER
	lv_obj_set_event_cb(lab_run_min, __qmsd_lab_run_min_cb);
#endif
	if(lab_run_min->coords.x2-lab_run_min->coords.x1<122)
	{
		int x_offset=(122-(lab_run_min->coords.x2-lab_run_min->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_run_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_run_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_run_min->coords.y2-lab_run_min->coords.y1<71)
	{
		int y_offset=(71-(lab_run_min->coords.y2-lab_run_min->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_run_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_run_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_run_min, 242, 214);
    qmsd_obj_set_id(lab_run_min,"lab_run_min");
}
    void qmsd_lab_run_scr_create()
{
	lab_run_scr = lv_label_create(screen_run, NULL);
	lv_label_set_long_mode(lab_run_scr,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_run_scr,true);
	lv_obj_set_size(lab_run_scr, 8, 71);
//set label style
	lv_obj_set_style_local_text_color(lab_run_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));

	lv_label_set_text(lab_run_scr, ":");
	lv_label_set_align(lab_run_scr, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_run_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_88);
#ifdef BLOCKLY_lab_run_scr_EVENT_HANDLER
	lv_obj_set_event_cb(lab_run_scr, __qmsd_lab_run_scr_cb);
#endif
	if(lab_run_scr->coords.x2-lab_run_scr->coords.x1<8)
	{
		int x_offset=(8-(lab_run_scr->coords.x2-lab_run_scr->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_run_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_run_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_run_scr->coords.y2-lab_run_scr->coords.y1<71)
	{
		int y_offset=(71-(lab_run_scr->coords.y2-lab_run_scr->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_run_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_run_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_run_scr, 227, 214);
    qmsd_obj_set_id(lab_run_scr,"lab_run_scr");
}

static void screen_run_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(lab_run_sign,qmsd_lang_get_trans("lab_run_sign","time left"));
    lv_label_set_text(lab_run_mode,qmsd_lang_get_trans("lab_run_mode","steam"));
    lv_label_set_text(__but_run_run_label,qmsd_lang_get_trans("but_run_run","running"));
    lv_label_set_text(lab_run_hour,qmsd_lang_get_trans("lab_run_hour","03"));
    lv_label_set_text(lab_run_min,qmsd_lang_get_trans("lab_run_min","30"));
    lv_label_set_text(lab_run_scr,qmsd_lang_get_trans("lab_run_scr",":"));
*/
#ifdef BLOCKLY_screen_run_SCREEN_INIT
    __qmsd_screen_run_init();
#endif
}

static void screen_run_del_cb(lv_obj_t* obj,lv_event_t event)
{
    if(event == LV_EVENT_DELETE)
    {
        screen_run=NULL;
        qmsd_screen_remove("screen_run");
    }
}

void screen_run_build(void)
{
    if(screen_run) return;
    screen_run = lv_obj_create(NULL, NULL);
    lv_obj_qmsd_set_cb(screen_run, screen_run_qmsd_cb);
    lv_obj_set_style_local_bg_color(screen_run,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0x00));

    qmsd_ima_run_bottom_create();
    qmsd_lab_run_sign_create();
    qmsd_ima_run_mode_create();
    qmsd_lab_run_mode_create();
    qmsd_but_run_run_create();
    qmsd_ima_run_com_create();
    qmsd_lab_run_hour_create();
    qmsd_lab_run_min_create();
    qmsd_lab_run_scr_create();
    lv_obj_set_event_cb(screen_run,screen_run_del_cb);
    qmsd_screen_register(screen_run,"screen_run");
}

void screen_run_show(void)
{
    if(!screen_run)
    {
        screen_run_build();
    }
    lv_scr_load(screen_run);
}

void screen_run_delete(void)
{
    if(screen_run)
    {
        lv_obj_del(screen_run);
        screen_run = NULL;
    }
}
