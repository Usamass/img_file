#include "qmsd_ui_entry.h"
#include "qmsd_lang.h"

static lv_style_t style; 
int screen_main_sign = -1; 
int scr_main_img_sign = -1; 

lv_task_t* _task_callback_12iav5;
void callback_12iav5(lv_task_t* t){
  static int _timer_index=1;
  if(_timer_index<1)
    _timer_index=1;
  if (((int)screen_main_sign) == 1) {
    lv_label_set_text(lab_ma_scr, "");
    if (((int)_timer_index) == 1) {
      lv_label_set_text(lab_ma_scr, ":");
    } else if (((int)_timer_index) == 2) {
      lv_label_set_text(lab_ma_scr, "");
      _timer_index = 0;
    }
  } else if (((int)screen_main_sign) == 2) {
    lv_task_del(t);
  }

  _timer_index++;
}
    void __qmsd_screen_main_init(void) {
  lv_obj_set_style_local_line_rounded(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);/* 设置圆环末端形状为方形 */
  lv_obj_set_style_local_line_rounded(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);/* 设置圆环末端形状为方形 */
  lv_obj_set_style_local_bg_opa(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,255);
  lv_obj_set_style_local_bg_opa(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);/*设置LV_ARC_PART_BG圆环的背景透明度为00*/
  lv_obj_set_style_local_line_width(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
  lv_obj_set_style_local_outline_width(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
  lv_obj_set_style_local_outline_width(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);/*设置LV_ARC_PART_BG圆环的外线宽度为0*/
  lv_obj_set_style_local_outline_opa(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
  lv_obj_set_style_local_outline_opa(arc_ma_bot,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);/*设置LV_ARC_PART_BG圆环的外线透明度为0*/
  lv_obj_set_style_local_outline_width(arc_ma_bot,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
  lv_obj_set_style_local_outline_opa(arc_ma_bot,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
  lv_obj_set_style_local_line_opa(arc_ma_bot,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,255);/* 设置LV_ARC_PART_INDIC这个弧的透明度 */
  lv_obj_set_style_local_border_opa(arc_ma_bot,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);/* 设置弧控件的外框透明度为0 */
  if (((int)screen_main_sign ) == -1) {
    scr_main_img_sign = 1;
  }
  screen_main_sign = 1;
  _task_callback_12iav5=lv_task_create(callback_12iav5,1000 , LV_TASK_PRIO_HIGH , NULL);
  /*以下为测试代码，整合到本地时可以删除*/
}

void __qmsd_screen_set_init(void) {
  lv_roller_set_auto_fit(roller_006e, true);
  lv_obj_set_style_local_text_line_space(roller_006e,LV_ROLLER_PART_SELECTED,LV_STATE_DEFAULT,0);
  lv_obj_set_style_local_text_line_space(roller_006e,LV_ROLLER_PART_BG,LV_STATE_DEFAULT,-10);
  lv_obj_set_style_local_text_opa(roller_006e,LV_ROLLER_PART_BG,LV_STATE_DEFAULT, LV_OPA_20);
  lv_roller_set_selected(roller_006e, 5, LV_ANIM_OFF);
  lv_obj_set_style_local_text_font(roller_006e,LV_ROLLER_PART_BG,LV_STATE_DEFAULT,&ali_font_78);
  lv_obj_set_style_local_text_opa(roller_006e,LV_ROLLER_PART_SELECTED,LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_bg_opa(roller_006e,LV_ROLLER_PART_SELECTED, LV_STATE_DEFAULT, LV_OPA_0);/*浅橙*/
  
  lv_obj_set_style_local_bg_opa(roller_006e,LV_ROLLER_PART_BG, LV_STATE_DEFAULT, LV_OPA_0);/*绿色*/
  lv_obj_set_style_local_bg_opa(roller_006e,LV_ROLLER_PART_BG, LV_STATE_FOCUSED, LV_OPA_0);/*黄色*/  
  lv_obj_set_style_local_bg_opa(roller_006e,LV_ROLLER_PART_BG, LV_STATE_PRESSED, LV_OPA_0);/*棕色*/
  lv_obj_set_style_local_bg_opa(contlink_main, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 0);
  lv_obj_set_style_local_border_opa(contlink_main, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 0);
  lv_obj_set_click(lab_set_sign, true);
  lv_obj_set_click(lab_run_sign, true);
}

void __qmsd_ima_ma_drie_cb(lv_obj_t * obj, lv_event_t event) {
  if ((event) == 13) {
    if (((int)scr_main_img_sign) == 1) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -202, 156);
      lv_obj_set_pos(ima_ma_stew, -26, 156);
      lv_obj_set_pos(ima_ma_bake, 150, 140);
      lv_obj_set_pos(ima_ma_airf, 360, 156);
      lv_obj_set_pos(ima_ma_stea, 536, 156);
      scr_main_img_sign = 2;
    } else if (((int)scr_main_img_sign) == 2) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -26, 156);
      lv_obj_set_pos(ima_ma_stew, 150, 140);
      lv_obj_set_pos(ima_ma_bake, 360, 156);
      lv_obj_set_pos(ima_ma_airf, 536, 156);
      lv_obj_set_pos(ima_ma_stea, -202, 156);
      scr_main_img_sign = 3;
    } else if (((int)scr_main_img_sign) == 3) {
      lv_img_set_src(ima_ma_drie, &imgmain_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 150, 140);
      lv_obj_set_pos(ima_ma_stew, 360, 156);
      lv_obj_set_pos(ima_ma_bake, 536, 156);
      lv_obj_set_pos(ima_ma_airf, -202, 156);
      lv_obj_set_pos(ima_ma_stea, -26, 156);
      scr_main_img_sign = 4;
    } else if (((int)scr_main_img_sign) == 4) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 360, 156);
      lv_obj_set_pos(ima_ma_stew, 536, 156);
      lv_obj_set_pos(ima_ma_bake, -202, 156);
      lv_obj_set_pos(ima_ma_airf, -26, 156);
      lv_obj_set_pos(ima_ma_stea, 150, 140);
      scr_main_img_sign = 5;
    } else if (((int)scr_main_img_sign) == 5) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 536, 156);
      lv_obj_set_pos(ima_ma_stew, -202, 156);
      lv_obj_set_pos(ima_ma_bake, -26, 156);
      lv_obj_set_pos(ima_ma_airf, 150, 140);
      lv_obj_set_pos(ima_ma_stea, 360, 156);
      scr_main_img_sign = 1;
    }
  }
}

void __qmsd_ima_ma_stew_cb(lv_obj_t * obj, lv_event_t event) {
  if ((event) == 13) {
    if (((int)scr_main_img_sign) == 1) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -202, 156);
      lv_obj_set_pos(ima_ma_stew, -26, 156);
      lv_obj_set_pos(ima_ma_bake, 150, 140);
      lv_obj_set_pos(ima_ma_airf, 360, 156);
      lv_obj_set_pos(ima_ma_stea, 536, 156);
      scr_main_img_sign = 2;
    } else if (((int)scr_main_img_sign) == 2) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -26, 156);
      lv_obj_set_pos(ima_ma_stew, 150, 140);
      lv_obj_set_pos(ima_ma_bake, 360, 156);
      lv_obj_set_pos(ima_ma_airf, 536, 156);
      lv_obj_set_pos(ima_ma_stea, -202, 156);
      scr_main_img_sign = 3;
    } else if (((int)scr_main_img_sign) == 3) {
      lv_img_set_src(ima_ma_drie, &imgmain_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 150, 140);
      lv_obj_set_pos(ima_ma_stew, 360, 156);
      lv_obj_set_pos(ima_ma_bake, 536, 156);
      lv_obj_set_pos(ima_ma_airf, -202, 156);
      lv_obj_set_pos(ima_ma_stea, -26, 156);
      scr_main_img_sign = 4;
    } else if (((int)scr_main_img_sign) == 4) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 360, 156);
      lv_obj_set_pos(ima_ma_stew, 536, 156);
      lv_obj_set_pos(ima_ma_bake, -202, 156);
      lv_obj_set_pos(ima_ma_airf, -26, 156);
      lv_obj_set_pos(ima_ma_stea, 150, 140);
      scr_main_img_sign = 5;
    } else if (((int)scr_main_img_sign) == 5) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 536, 156);
      lv_obj_set_pos(ima_ma_stew, -202, 156);
      lv_obj_set_pos(ima_ma_bake, -26, 156);
      lv_obj_set_pos(ima_ma_airf, 150, 140);
      lv_obj_set_pos(ima_ma_stea, 360, 156);
      scr_main_img_sign = 1;
    }
  }
}

void __qmsd_ima_ma_bake_cb(lv_obj_t * obj, lv_event_t event) {
  if ((event) == 13) {
    if (((int)scr_main_img_sign) == 1) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -202, 156);
      lv_obj_set_pos(ima_ma_stew, -26, 156);
      lv_obj_set_pos(ima_ma_bake, 150, 140);
      lv_obj_set_pos(ima_ma_airf, 360, 156);
      lv_obj_set_pos(ima_ma_stea, 536, 156);
      scr_main_img_sign = 2;
    } else if (((int)scr_main_img_sign) == 2) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -26, 156);
      lv_obj_set_pos(ima_ma_stew, 150, 140);
      lv_obj_set_pos(ima_ma_bake, 360, 156);
      lv_obj_set_pos(ima_ma_airf, 536, 156);
      lv_obj_set_pos(ima_ma_stea, -202, 156);
      scr_main_img_sign = 3;
    } else if (((int)scr_main_img_sign) == 3) {
      lv_img_set_src(ima_ma_drie, &imgmain_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 150, 140);
      lv_obj_set_pos(ima_ma_stew, 360, 156);
      lv_obj_set_pos(ima_ma_bake, 536, 156);
      lv_obj_set_pos(ima_ma_airf, -202, 156);
      lv_obj_set_pos(ima_ma_stea, -26, 156);
      scr_main_img_sign = 4;
    } else if (((int)scr_main_img_sign) == 4) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 360, 156);
      lv_obj_set_pos(ima_ma_stew, 536, 156);
      lv_obj_set_pos(ima_ma_bake, -202, 156);
      lv_obj_set_pos(ima_ma_airf, -26, 156);
      lv_obj_set_pos(ima_ma_stea, 150, 140);
      scr_main_img_sign = 5;
    } else if (((int)scr_main_img_sign) == 5) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 536, 156);
      lv_obj_set_pos(ima_ma_stew, -202, 156);
      lv_obj_set_pos(ima_ma_bake, -26, 156);
      lv_obj_set_pos(ima_ma_airf, 150, 140);
      lv_obj_set_pos(ima_ma_stea, 360, 156);
      scr_main_img_sign = 1;
    }
  }
}

void __qmsd_ima_ma_airf_cb(lv_obj_t * obj, lv_event_t event) {
  if ((event) == 13) {
    if (((int)scr_main_img_sign) == 1) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -202, 156);
      lv_obj_set_pos(ima_ma_stew, -26, 156);
      lv_obj_set_pos(ima_ma_bake, 150, 140);
      lv_obj_set_pos(ima_ma_airf, 360, 156);
      lv_obj_set_pos(ima_ma_stea, 536, 156);
      scr_main_img_sign = 2;
    } else if (((int)scr_main_img_sign) == 2) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -26, 156);
      lv_obj_set_pos(ima_ma_stew, 150, 140);
      lv_obj_set_pos(ima_ma_bake, 360, 156);
      lv_obj_set_pos(ima_ma_airf, 536, 156);
      lv_obj_set_pos(ima_ma_stea, -202, 156);
      scr_main_img_sign = 3;
    } else if (((int)scr_main_img_sign) == 3) {
      lv_img_set_src(ima_ma_drie, &imgmain_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 150, 140);
      lv_obj_set_pos(ima_ma_stew, 360, 156);
      lv_obj_set_pos(ima_ma_bake, 536, 156);
      lv_obj_set_pos(ima_ma_airf, -202, 156);
      lv_obj_set_pos(ima_ma_stea, -26, 156);
      scr_main_img_sign = 4;
    } else if (((int)scr_main_img_sign) == 4) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 360, 156);
      lv_obj_set_pos(ima_ma_stew, 536, 156);
      lv_obj_set_pos(ima_ma_bake, -202, 156);
      lv_obj_set_pos(ima_ma_airf, -26, 156);
      lv_obj_set_pos(ima_ma_stea, 150, 140);
      scr_main_img_sign = 5;
    } else if (((int)scr_main_img_sign) == 5) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 536, 156);
      lv_obj_set_pos(ima_ma_stew, -202, 156);
      lv_obj_set_pos(ima_ma_bake, -26, 156);
      lv_obj_set_pos(ima_ma_airf, 150, 140);
      lv_obj_set_pos(ima_ma_stea, 360, 156);
      scr_main_img_sign = 1;
    }
  }
}

void __qmsd_ima_ma_stea_cb(lv_obj_t * obj, lv_event_t event) {
  if ((event) == 13) {
    if (((int)scr_main_img_sign) == 1) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -202, 156);
      lv_obj_set_pos(ima_ma_stew, -26, 156);
      lv_obj_set_pos(ima_ma_bake, 150, 140);
      lv_obj_set_pos(ima_ma_airf, 360, 156);
      lv_obj_set_pos(ima_ma_stea, 536, 156);
      scr_main_img_sign = 2;
    } else if (((int)scr_main_img_sign) == 2) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, -26, 156);
      lv_obj_set_pos(ima_ma_stew, 150, 140);
      lv_obj_set_pos(ima_ma_bake, 360, 156);
      lv_obj_set_pos(ima_ma_airf, 536, 156);
      lv_obj_set_pos(ima_ma_stea, -202, 156);
      scr_main_img_sign = 3;
    } else if (((int)scr_main_img_sign) == 3) {
      lv_img_set_src(ima_ma_drie, &imgmain_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 150, 140);
      lv_obj_set_pos(ima_ma_stew, 360, 156);
      lv_obj_set_pos(ima_ma_bake, 536, 156);
      lv_obj_set_pos(ima_ma_airf, -202, 156);
      lv_obj_set_pos(ima_ma_stea, -26, 156);
      scr_main_img_sign = 4;
    } else if (((int)scr_main_img_sign) == 4) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_small_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 360, 156);
      lv_obj_set_pos(ima_ma_stew, 536, 156);
      lv_obj_set_pos(ima_ma_bake, -202, 156);
      lv_obj_set_pos(ima_ma_airf, -26, 156);
      lv_obj_set_pos(ima_ma_stea, 150, 140);
      scr_main_img_sign = 5;
    } else if (((int)scr_main_img_sign) == 5) {
      lv_img_set_src(ima_ma_drie, &imgmain_small_dried_fruit_png);
      lv_img_set_src(ima_ma_stew, &imgmain_small_steamed_png);
      lv_img_set_src(ima_ma_bake, &imgmain_small_bake_png);
      lv_img_set_src(ima_ma_airf, &imgmain_air_fry_png);
      lv_img_set_src(ima_ma_stea, &imgmain_small_steamed_png);
      lv_obj_set_pos(ima_ma_drie, 536, 156);
      lv_obj_set_pos(ima_ma_stew, -202, 156);
      lv_obj_set_pos(ima_ma_bake, -26, 156);
      lv_obj_set_pos(ima_ma_airf, 150, 140);
      lv_obj_set_pos(ima_ma_stea, 360, 156);
      scr_main_img_sign = 1;
    }
  }
}

void __qmsd_screen_run_init(void) {
  printf("screen_run here\n");
}

void __qmsd_lab_set_sign_cb(lv_obj_t * obj, lv_event_t event) {
if(event == LV_EVENT_SHORT_CLICKED) {
  screen_run_show();
} else if (event == LV_EVENT_LONG_PRESSED||event == LV_EVENT_LONG_PRESSED_REPEAT) {
}
}

void __qmsd_lab_run_sign_cb(lv_obj_t * obj, lv_event_t event) {
if(event == LV_EVENT_SHORT_CLICKED) {
  screen_set_show();
} else if (event == LV_EVENT_LONG_PRESSED||event == LV_EVENT_LONG_PRESSED_REPEAT) {
}
}

void __qmsd_but_set_time_cb(lv_obj_t * obj, lv_event_t event) {
if(event == LV_EVENT_SHORT_CLICKED) {
  lv_roller_set_options(roller_006e,
      "30""\n"
      "40""\n"
      "50""\n"
      "60""\n"
      "70""\n"
      "80""\n"
      "90""\n"
      "100""\n"
      "110""\n"
      "120"
  ,LV_ROLLER_MODE_INIFINITE);
} else if (event == LV_EVENT_LONG_PRESSED||event == LV_EVENT_LONG_PRESSED_REPEAT) {
}
}

void __qmsd_but_set_temp_cb(lv_obj_t * obj, lv_event_t event) {
if(event == LV_EVENT_SHORT_CLICKED) {
  lv_roller_set_options(roller_006e,
      "40""\n"
      "50""\n"
      "60""\n"
      "70""\n"
      "80""\n"
      "90""\n"
      "100""\n"
      "110""\n"
      "120""\n"
      "130""\n"
      "140""\n"
      "150""\n"
      "160""\n"
      "170""\n"
      "180""\n"
      "190""\n"
      "200""\n"
      "210""\n"
      "220"
  ,LV_ROLLER_MODE_INIFINITE);
} else if (event == LV_EVENT_LONG_PRESSED||event == LV_EVENT_LONG_PRESSED_REPEAT) {
}
}
