#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* calendar_HpK4;


    void qmsd_calendar_HpK4_create()
{
    calendar_HpK4 = lv_calendar_create(screen_main, NULL);
    lv_obj_set_size(calendar_HpK4, 240, 300);
    lv_obj_set_pos(calendar_HpK4, 31, 11);
    lv_calendar_date_t calendar_HpK4_today;
    calendar_HpK4_today.year = 2020;
    calendar_HpK4_today.month = 1;
    calendar_HpK4_today.day = 1;
    lv_calendar_set_today_date(calendar_HpK4, &calendar_HpK4_today);
    lv_calendar_set_showed_date(calendar_HpK4, &calendar_HpK4_today);
    qmsd_obj_set_id(calendar_HpK4,"calendar_HpK4");
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

    qmsd_calendar_HpK4_create();
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
