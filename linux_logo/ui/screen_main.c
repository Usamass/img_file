#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* image_0kR4;


    
void qmsd_image_0kR4_create()
{
    image_0kR4 = lv_img_create(screen_main, NULL);
    lv_obj_set_style_local_image_opa(image_0kR4,LV_IMG_PART_MAIN,LV_STATE_DEFAULT,255);
    lv_img_set_src(image_0kR4, &imglinux_logo_png);
#ifdef BLOCKLY_image_0kR4_EVENT_HANDLER
    lv_obj_set_event_cb(image_0kR4, __qmsd_image_0kR4_cb);
#endif
    lv_obj_set_pos(image_0kR4, 46, 43);
    lv_obj_set_click(image_0kR4,false);
    lv_obj_set_style_local_image_recolor(image_0kR4,LV_IMG_PART_MAIN,LV_STATE_PRESSED,LV_COLOR_BLACK);
    lv_obj_set_style_local_image_recolor_opa(image_0kR4,LV_IMG_PART_MAIN,LV_STATE_PRESSED,60);
    qmsd_obj_set_id(image_0kR4,"image_0kR4");
}

static void screen_main_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
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

    qmsd_image_0kR4_create();
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
