#include "qmsd_ui_entry.h"
#include "qmsd_ctrl.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    lv_img_src_t* img;
} qmsd_img_t;

typedef struct
{
    char *name;
    lv_font_t* font;
} qmsd_font_t;

/*
* includes
*/

/*
* declear screens
*/

lv_obj_t * g_kb = NULL;

static void g_kb_event_cb(lv_obj_t * event_kb, lv_event_t event)
{
    /* Just call the regular event handler */
    if(event == LV_EVENT_APPLY) {
        lv_obj_set_hidden(event_kb, true);
    } else if(event == LV_EVENT_CANCEL) {
        lv_obj_set_hidden(event_kb, true);
    }
    else if (event==LV_EVENT_DELETE){
        g_kb=NULL;
    } else {
        lv_keyboard_def_event_cb(event_kb, event);
    }
}
void g_create_kb_ifneeded() {
    if(g_kb == NULL) {
        g_kb = lv_keyboard_create(screen_main, NULL);
        lv_obj_set_pos(g_kb, 5, 90);
        lv_obj_set_event_cb(g_kb, g_kb_event_cb); /* Setting a custom event handler stops the keyboard from closing automatically */
        lv_obj_set_size(g_kb,  LV_HOR_RES - 10, 140);
        lv_keyboard_set_cursor_manage(g_kb, true); /* Automatically show/hide cursors on text areas */
        lv_obj_set_hidden(g_kb, true);
    }
}
void g_show_kb() 
{
    g_create_kb_ifneeded();
    lv_obj_set_parent(g_kb, lv_scr_act());
    lv_obj_set_hidden(g_kb, false);
    lv_obj_align(g_kb,NULL,LV_ALIGN_IN_BOTTOM_MID,0,0);
}

qmsd_img_t g_qmsd_img[] = 
{
        {"imgabstron_logo_jpeg",&imgabstron_logo_jpeg},
    {"imglinux_logo_png",&imglinux_logo_png},
};

qmsd_font_t g_qmsd_font[] =
{
    {"ali_font_16",&ali_font_16},
    {"ali_font_1",&ali_font_1},
};

void qmsd_ui_entry(void)
{
    qmsd_screen_list_init(16);
    qmsd_set_screen(qmsd_search_screen);
    qmsd_set_widget(qmsd_search_widget);
    qmsd_set_img(qmsd_get_img);
    qmsd_set_font(qmsd_get_font);
    
    screen_main_build();

    screen_main_show();
}

lv_img_src_t *qmsd_get_img(const char *w_name)
{
    int i = 0;

    for (i = 0; i < (sizeof(g_qmsd_img) / sizeof(g_qmsd_img[0])); i++)
    {
        if (!strcmp(w_name, g_qmsd_img[i].name))
        {
            if (g_qmsd_img[i].img) {
                return g_qmsd_img[i].img;
            } else {
                return NULL;
            }
        }
    }

    return NULL;
}

lv_font_t *qmsd_get_font(const char *w_name)
{
    int i = 0;

    for (i = 0; i < (sizeof(g_qmsd_font) / sizeof(g_qmsd_font[0])); i++)
    {
        if (!strcmp(w_name, g_qmsd_font[i].name))
        {
            if (g_qmsd_font[i].font) {
                return g_qmsd_font[i].font;
            } else {
                return NULL;
            }
        }
    }

    return NULL;
}