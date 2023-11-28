#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* image_1929;
lv_obj_t* ima_ma_bottom;
lv_obj_t* ima_ma_drie;
lv_obj_t* ima_ma_stew;
lv_obj_t* ima_ma_airf;
lv_obj_t* ima_ma_stea;
lv_obj_t* ima_ma_sign;
lv_obj_t* ima_ma_wifi;
lv_obj_t* ima_ma_water;
lv_obj_t* ima_ma_bake;
lv_obj_t* lab_ma_min;
lv_obj_t* lab_ma_scr;
lv_obj_t* lab_ma_hour;
lv_obj_t* ima_ma_b_mi;
lv_obj_t* ima_ma_b_ri;
lv_obj_t* ima_ma_b_riri;
lv_obj_t* ima_ma_b_le;
lv_obj_t* ima_ma_b_lele;
lv_obj_t* arc_ma_bot;


    
void qmsd_image_1929_create()
{
    image_1929 = lv_img_create(screen_main, NULL);
    lv_img_set_src(image_1929, &imgaaa_png);
#ifdef BLOCKLY_image_1929_EVENT_HANDLER
    lv_obj_set_event_cb(image_1929, __qmsd_image_1929_cb);
#endif
    lv_obj_set_pos(image_1929, 11, 10);
    qmsd_obj_set_id(image_1929,"image_1929");
}
    
void qmsd_ima_ma_bottom_create()
{
    ima_ma_bottom = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_bottom, &imgmain_bottom_png);
#ifdef BLOCKLY_ima_ma_bottom_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_bottom, __qmsd_ima_ma_bottom_cb);
#endif
    lv_obj_set_pos(ima_ma_bottom, 0, 0);
    qmsd_obj_set_id(ima_ma_bottom,"ima_ma_bottom");
}
    
void qmsd_ima_ma_drie_create()
{
    ima_ma_drie = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
#ifdef BLOCKLY_ima_ma_drie_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_drie, __qmsd_ima_ma_drie_cb);
#endif
    lv_obj_set_pos(ima_ma_drie, -202, 156);
    lv_obj_set_click(ima_ma_drie,true);
    lv_obj_set_style_local_image_recolor(ima_ma_drie,LV_IMG_PART_MAIN,LV_STATE_PRESSED,LV_COLOR_BLACK);
    lv_obj_set_style_local_image_recolor_opa(ima_ma_drie,LV_IMG_PART_MAIN,LV_STATE_PRESSED,60);
    qmsd_obj_set_id(ima_ma_drie,"ima_ma_drie");
}
    
void qmsd_ima_ma_stew_create()
{
    ima_ma_stew = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_stew, &imgmain_small_stew_png);
#ifdef BLOCKLY_ima_ma_stew_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_stew, __qmsd_ima_ma_stew_cb);
#endif
    lv_obj_set_pos(ima_ma_stew, -26, 156);
    lv_obj_set_click(ima_ma_stew,true);
    lv_obj_set_style_local_image_recolor(ima_ma_stew,LV_IMG_PART_MAIN,LV_STATE_PRESSED,LV_COLOR_BLACK);
    lv_obj_set_style_local_image_recolor_opa(ima_ma_stew,LV_IMG_PART_MAIN,LV_STATE_PRESSED,60);
    qmsd_obj_set_id(ima_ma_stew,"ima_ma_stew");
}
    
void qmsd_ima_ma_airf_create()
{
    ima_ma_airf = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
#ifdef BLOCKLY_ima_ma_airf_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_airf, __qmsd_ima_ma_airf_cb);
#endif
    lv_obj_set_pos(ima_ma_airf, 360, 156);
    lv_obj_set_click(ima_ma_airf,true);
    lv_obj_set_style_local_image_recolor(ima_ma_airf,LV_IMG_PART_MAIN,LV_STATE_PRESSED,LV_COLOR_BLACK);
    lv_obj_set_style_local_image_recolor_opa(ima_ma_airf,LV_IMG_PART_MAIN,LV_STATE_PRESSED,60);
    qmsd_obj_set_id(ima_ma_airf,"ima_ma_airf");
}
    
void qmsd_ima_ma_stea_create()
{
    ima_ma_stea = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
#ifdef BLOCKLY_ima_ma_stea_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_stea, __qmsd_ima_ma_stea_cb);
#endif
    lv_obj_set_pos(ima_ma_stea, 536, 156);
    lv_obj_set_click(ima_ma_stea,true);
    lv_obj_set_style_local_image_recolor(ima_ma_stea,LV_IMG_PART_MAIN,LV_STATE_PRESSED,LV_COLOR_BLACK);
    lv_obj_set_style_local_image_recolor_opa(ima_ma_stea,LV_IMG_PART_MAIN,LV_STATE_PRESSED,60);
    qmsd_obj_set_id(ima_ma_stea,"ima_ma_stea");
}
    
void qmsd_ima_ma_sign_create()
{
    ima_ma_sign = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_sign, &imgmain_ma_sign_png);
#ifdef BLOCKLY_ima_ma_sign_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_sign, __qmsd_ima_ma_sign_cb);
#endif
    lv_obj_set_pos(ima_ma_sign, 117, 62);
    qmsd_obj_set_id(ima_ma_sign,"ima_ma_sign");
}
    
void qmsd_ima_ma_wifi_create()
{
    ima_ma_wifi = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_wifi, &imgmain_wifi_png);
#ifdef BLOCKLY_ima_ma_wifi_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_wifi, __qmsd_ima_ma_wifi_cb);
#endif
    lv_obj_set_pos(ima_ma_wifi, 139, 84);
    qmsd_obj_set_id(ima_ma_wifi,"ima_ma_wifi");
}
    
void qmsd_ima_ma_water_create()
{
    ima_ma_water = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_water, &imgmain_water_1_png);
#ifdef BLOCKLY_ima_ma_water_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_water, __qmsd_ima_ma_water_cb);
#endif
    lv_obj_set_pos(ima_ma_water, 319, 81);
    qmsd_obj_set_id(ima_ma_water,"ima_ma_water");
}
    
void qmsd_ima_ma_bake_create()
{
    ima_ma_bake = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_bake, &imgmain_bake_png);
#ifdef BLOCKLY_ima_ma_bake_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_bake, __qmsd_ima_ma_bake_cb);
#endif
    lv_obj_set_pos(ima_ma_bake, 150, 140);
    lv_obj_set_click(ima_ma_bake,true);
    lv_obj_set_style_local_image_recolor(ima_ma_bake,LV_IMG_PART_MAIN,LV_STATE_PRESSED,LV_COLOR_BLACK);
    lv_obj_set_style_local_image_recolor_opa(ima_ma_bake,LV_IMG_PART_MAIN,LV_STATE_PRESSED,60);
    qmsd_obj_set_id(ima_ma_bake,"ima_ma_bake");
}
    void qmsd_lab_ma_min_create()
{
	lab_ma_min = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_ma_min,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_ma_min,true);
	lv_obj_set_size(lab_ma_min, 54, 33);
//set label style
	lv_obj_set_style_local_text_color(lab_ma_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_ma_min, "00");
	lv_label_set_align(lab_ma_min, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_ma_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_ma_min_EVENT_HANDLER
	lv_obj_set_event_cb(lab_ma_min, __qmsd_lab_ma_min_cb);
#endif
	if(lab_ma_min->coords.x2-lab_ma_min->coords.x1<54)
	{
		int x_offset=(54-(lab_ma_min->coords.x2-lab_ma_min->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_ma_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_ma_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_ma_min->coords.y2-lab_ma_min->coords.y1<33)
	{
		int y_offset=(33-(lab_ma_min->coords.y2-lab_ma_min->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_ma_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_ma_min,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_ma_min, 240, 74);
    qmsd_obj_set_id(lab_ma_min,"lab_ma_min");
}
    void qmsd_lab_ma_scr_create()
{
	lab_ma_scr = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_ma_scr,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_ma_scr,true);
	lv_obj_set_size(lab_ma_scr, 5, 33);
//set label style
	lv_obj_set_style_local_text_color(lab_ma_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_ma_scr, ":");
	lv_label_set_align(lab_ma_scr, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_ma_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_ma_scr_EVENT_HANDLER
	lv_obj_set_event_cb(lab_ma_scr, __qmsd_lab_ma_scr_cb);
#endif
	if(lab_ma_scr->coords.x2-lab_ma_scr->coords.x1<5)
	{
		int x_offset=(5-(lab_ma_scr->coords.x2-lab_ma_scr->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_ma_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_ma_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_ma_scr->coords.y2-lab_ma_scr->coords.y1<33)
	{
		int y_offset=(33-(lab_ma_scr->coords.y2-lab_ma_scr->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_ma_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_ma_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_ma_scr, 232, 74);
    qmsd_obj_set_id(lab_ma_scr,"lab_ma_scr");
}
    void qmsd_lab_ma_hour_create()
{
	lab_ma_hour = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_ma_hour,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_ma_hour,true);
	lv_obj_set_size(lab_ma_hour, 54, 33);
//set label style
	lv_obj_set_style_local_text_color(lab_ma_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_ma_hour, "13");
	lv_label_set_align(lab_ma_hour, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_ma_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_ma_hour_EVENT_HANDLER
	lv_obj_set_event_cb(lab_ma_hour, __qmsd_lab_ma_hour_cb);
#endif
	if(lab_ma_hour->coords.x2-lab_ma_hour->coords.x1<54)
	{
		int x_offset=(54-(lab_ma_hour->coords.x2-lab_ma_hour->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_ma_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_ma_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_ma_hour->coords.y2-lab_ma_hour->coords.y1<33)
	{
		int y_offset=(33-(lab_ma_hour->coords.y2-lab_ma_hour->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_ma_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_ma_hour,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_ma_hour, 187, 74);
    qmsd_obj_set_id(lab_ma_hour,"lab_ma_hour");
}
    
void qmsd_ima_ma_b_mi_create()
{
    ima_ma_b_mi = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_b_mi, &imgmain_bottom_on_png);
#ifdef BLOCKLY_ima_ma_b_mi_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_b_mi, __qmsd_ima_ma_b_mi_cb);
#endif
    lv_obj_set_pos(ima_ma_b_mi, 235, 427);
    qmsd_obj_set_id(ima_ma_b_mi,"ima_ma_b_mi");
}
    
void qmsd_ima_ma_b_ri_create()
{
    ima_ma_b_ri = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_b_ri, &imgmain_bottom_off_png);
#ifdef BLOCKLY_ima_ma_b_ri_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_b_ri, __qmsd_ima_ma_b_ri_cb);
#endif
    lv_obj_set_pos(ima_ma_b_ri, 265, 422);
    qmsd_obj_set_id(ima_ma_b_ri,"ima_ma_b_ri");
}
    
void qmsd_ima_ma_b_riri_create()
{
    ima_ma_b_riri = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_b_riri, &imgmain_bottom_off_png);
#ifdef BLOCKLY_ima_ma_b_riri_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_b_riri, __qmsd_ima_ma_b_riri_cb);
#endif
    lv_obj_set_pos(ima_ma_b_riri, 293, 412);
    qmsd_obj_set_id(ima_ma_b_riri,"ima_ma_b_riri");
}
    
void qmsd_ima_ma_b_le_create()
{
    ima_ma_b_le = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_b_le, &imgmain_bottom_off_png);
#ifdef BLOCKLY_ima_ma_b_le_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_b_le, __qmsd_ima_ma_b_le_cb);
#endif
    lv_obj_set_pos(ima_ma_b_le, 204, 422);
    qmsd_obj_set_id(ima_ma_b_le,"ima_ma_b_le");
}
    
void qmsd_ima_ma_b_lele_create()
{
    ima_ma_b_lele = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ma_b_lele, &imgmain_bottom_off_png);
#ifdef BLOCKLY_ima_ma_b_lele_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ma_b_lele, __qmsd_ima_ma_b_lele_cb);
#endif
    lv_obj_set_pos(ima_ma_b_lele, 171, 412);
    qmsd_obj_set_id(ima_ma_b_lele,"ima_ma_b_lele");
}
    void qmsd_arc_ma_bot_create()
{
    arc_ma_bot = lv_arc_create(screen_main, NULL);
    lv_obj_set_size(arc_ma_bot, 480, 480);
    lv_obj_set_pos(arc_ma_bot, 0, 0);
    //set indic style
    lv_obj_set_style_local_line_color(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x12, 0x05, 0x00));
    lv_obj_set_style_local_line_width(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,12);
    //set main part style
    lv_obj_set_style_local_line_color(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xD4, 0xD7, 0xD9));
    lv_obj_set_style_local_line_width(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,12);
    lv_obj_set_style_local_bg_color(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xFF, 0xFF, 0xFF));
    lv_obj_set_style_local_pad_all(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_bg_opa(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,255);

    lv_arc_set_bg_angles(arc_ma_bot, 271, 270);
    lv_arc_set_angles(arc_ma_bot, 271, 270);
#ifdef BLOCKLY_arc_ma_bot_EVENT_HANDLER
    lv_obj_set_event_cb(arc_ma_bot, __qmsd_arc_ma_bot_cb);
#endif
    qmsd_obj_set_id(arc_ma_bot,"arc_ma_bot");
}

static void screen_main_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(lab_ma_min,qmsd_lang_get_trans("lab_ma_min","00"));
    lv_label_set_text(lab_ma_scr,qmsd_lang_get_trans("lab_ma_scr",":"));
    lv_label_set_text(lab_ma_hour,qmsd_lang_get_trans("lab_ma_hour","13"));
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
    lv_obj_set_style_local_bg_color(screen_main,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x9b, 0x9b, 0x9b));

    qmsd_image_1929_create();
    qmsd_ima_ma_bottom_create();
    qmsd_ima_ma_drie_create();
    qmsd_ima_ma_stew_create();
    qmsd_ima_ma_airf_create();
    qmsd_ima_ma_stea_create();
    qmsd_ima_ma_sign_create();
    qmsd_ima_ma_wifi_create();
    qmsd_ima_ma_water_create();
    qmsd_ima_ma_bake_create();
    qmsd_lab_ma_min_create();
    qmsd_lab_ma_scr_create();
    qmsd_lab_ma_hour_create();
    qmsd_ima_ma_b_mi_create();
    qmsd_ima_ma_b_ri_create();
    qmsd_ima_ma_b_riri_create();
    qmsd_ima_ma_b_le_create();
    qmsd_ima_ma_b_lele_create();
    qmsd_arc_ma_bot_create();
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
