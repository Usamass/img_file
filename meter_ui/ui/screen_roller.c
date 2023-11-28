#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_roller;
lv_obj_t* label_78;
lv_obj_t* label_82;
lv_obj_t* roller_006e;
lv_obj_t* lab_dd89;


    void qmsd_label_78_create()
{
	label_78 = lv_label_create(screen_roller, NULL);
	lv_label_set_long_mode(label_78,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(label_78,true);
	lv_obj_set_size(label_78, 100, 40);
//set label style

	lv_label_set_text(label_78, "0123456789");
	lv_label_set_align(label_78, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(label_78,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_78);
#ifdef BLOCKLY_label_78_EVENT_HANDLER
	lv_obj_set_event_cb(label_78, __qmsd_label_78_cb);
#endif
	if(label_78->coords.x2-label_78->coords.x1<100)
	{
		int x_offset=(100-(label_78->coords.x2-label_78->coords.x1))/2;
		lv_obj_set_style_local_pad_left(label_78,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(label_78,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(label_78->coords.y2-label_78->coords.y1<40)
	{
		int y_offset=(40-(label_78->coords.y2-label_78->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(label_78,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(label_78,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(label_78, 480, 220);
    qmsd_obj_set_id(label_78,"label_78");
}
    void qmsd_label_82_create()
{
	label_82 = lv_label_create(screen_roller, NULL);
	lv_label_set_long_mode(label_82,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(label_82,true);
	lv_obj_set_size(label_82, 100, 40);
//set label style

	lv_label_set_text(label_82, "0123456789");
	lv_label_set_align(label_82, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(label_82,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_88);
#ifdef BLOCKLY_label_82_EVENT_HANDLER
	lv_obj_set_event_cb(label_82, __qmsd_label_82_cb);
#endif
	if(label_82->coords.x2-label_82->coords.x1<100)
	{
		int x_offset=(100-(label_82->coords.x2-label_82->coords.x1))/2;
		lv_obj_set_style_local_pad_left(label_82,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(label_82,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(label_82->coords.y2-label_82->coords.y1<40)
	{
		int y_offset=(40-(label_82->coords.y2-label_82->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(label_82,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(label_82,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(label_82, 500, 240);
    qmsd_obj_set_id(label_82,"label_82");
}
    void qmsd_roller_006e_create()
{
    roller_006e = lv_roller_create(screen_roller, NULL);
//设置控件大小
    lv_obj_set_size(roller_006e, 196, 57);
    lv_roller_set_fix_width(roller_006e,196);
//设置控件位置
    lv_obj_set_pos(roller_006e, -30, -45);

//设置默认选中
//设置文本对齐方式


#ifdef BLOCKLY_roller_006e_EVENT_HANDLER
//设置选中回调
    lv_obj_set_event_cb(roller_006e, __qmsd_roller_006e_cb);
#endif

//设置背景色

    lv_obj_set_style_local_text_color(roller_006e,LV_ROLLER_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_text_font(roller_006e,LV_ROLLER_PART_BG,LV_STATE_DEFAULT,&ali_font_76);
    lv_obj_set_style_local_border_width(roller_006e,LV_ROLLER_PART_BG,LV_STATE_DEFAULT,0);

//设置字体大小颜色结束
//设置选中样式
    lv_obj_t* obj = roller_006e;
    int part = LV_ROLLER_PART_SELECTED;
        lv_obj_set_style_local_radius(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_border_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_border_opa(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_shadow_width(obj,part,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_text_color(obj,part,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0x4a, 0x04));
    lv_obj_set_style_local_text_font(obj,part,LV_STATE_DEFAULT,&ali_font_88);

//设置可见行数
    lv_roller_set_visible_row_count(roller_006e, 3);
//设置选中样式结束
//设置控件内容
    lv_roller_set_options(roller_006e,
    "100"
,LV_ROLLER_MODE_INIFINITE);
    qmsd_obj_set_id(roller_006e,"roller_006e");
}
    void qmsd_lab_dd89_create()
{
	lab_dd89 = lv_label_create(screen_roller, NULL);
	lv_label_set_long_mode(lab_dd89,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_dd89,true);
	lv_obj_set_size(lab_dd89, 83, 34);
//set label style
	lv_obj_set_style_local_text_color(lab_dd89,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xeb, 0xdd, 0xd3));

	lv_label_set_text(lab_dd89, "蒸烤空气炸烘烤炖汤果干");
	lv_label_set_align(lab_dd89, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_dd89,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_36);
#ifdef BLOCKLY_lab_dd89_EVENT_HANDLER
	lv_obj_set_event_cb(lab_dd89, __qmsd_lab_dd89_cb);
#endif
	if(lab_dd89->coords.x2-lab_dd89->coords.x1<83)
	{
		int x_offset=(83-(lab_dd89->coords.x2-lab_dd89->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_dd89,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_dd89,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_dd89->coords.y2-lab_dd89->coords.y1<34)
	{
		int y_offset=(34-(lab_dd89->coords.y2-lab_dd89->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_dd89,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_dd89,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_dd89, -208, 633);
    qmsd_obj_set_id(lab_dd89,"lab_dd89");
}

static void screen_roller_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(label_78,qmsd_lang_get_trans("label_78","0123456789"));
    lv_label_set_text(label_82,qmsd_lang_get_trans("label_82","0123456789"));
    lv_label_set_text(lab_dd89,qmsd_lang_get_trans("lab_dd89","蒸烤空气炸烘烤炖汤果干"));
*/
#ifdef BLOCKLY_screen_roller_SCREEN_INIT
    __qmsd_screen_roller_init();
#endif
}

void screen_roller_cont_cb(lv_obj_t* obj,lv_event_t event)
{
    if(event == LV_EVENT_DELETE)
    {
        screen_roller = NULL;
        qmsd_screen_remove("screen_roller");
    }
#ifdef BLOCKLY_screen_roller_EVENT_HANDLER
	__qmsd_screen_roller_cb(obj,event);
#endif
}

lv_obj_t* screen_roller_build(lv_obj_t* parent)
{
    if(!screen_roller)
    {
        screen_roller = lv_cont_create(parent, NULL);
        lv_obj_set_size(screen_roller,150,200);
        lv_obj_set_pos(screen_roller,0,0);
        lv_obj_set_event_cb(screen_roller,screen_roller_cont_cb);
        qmsd_label_78_create();
        lv_page_glue_obj(label_78,true);
        qmsd_label_82_create();
        lv_page_glue_obj(label_82,true);
        qmsd_roller_006e_create();
        lv_page_glue_obj(roller_006e,true);
        qmsd_lab_dd89_create();
        lv_page_glue_obj(lab_dd89,true);
        lv_obj_set_style_local_bg_color(screen_roller,LV_PAGE_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xb8, 0xe9, 0x86));
        qmsd_screen_register(screen_roller,"screen_roller");
        return screen_roller;
    }
    return NULL;
}

void screen_roller_show(void)
{

}

void screen_roller_delete(void)
{
    if(screen_roller)
    {
        lv_obj_del(screen_roller);
        screen_roller = NULL;
    }
}
