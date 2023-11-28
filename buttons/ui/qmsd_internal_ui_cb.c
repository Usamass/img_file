#include "qmsd_ui_entry.h"
#include "qmsd_lang.h"


void __qmsd_button_1_cb (lv_obj_t * obj, lv_event_t event) {
    if (event == LV_EVENT_SHORT_CLICKED) {
        printf("Button 1 pressed!\n");
    }


}

void __qmsd_button_2_cb (lv_obj_t * obj, lv_event_t event) {
     if (event == LV_EVENT_SHORT_CLICKED) {
        printf("Button 2 pressed!\n");
    }



}

