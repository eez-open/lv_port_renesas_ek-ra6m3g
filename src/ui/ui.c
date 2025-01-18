#if defined(EEZ_FOR_LVGL)
#include <eez/core/vars.h>
#endif

#include "ui.h"
#include "screens.h"
#include "images.h"
#include "actions.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[1148] = {
    0x7E, 0x45, 0x45, 0x5A, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xE0, 0x01, 0x10, 0x01, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0xEC, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0x14, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xBC, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x65, 0x66, 0x61,
    0x75, 0x6C, 0x74, 0x00, 0x30, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0xB0, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00,
    0x04, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x3C, 0x01, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00,
    0x74, 0x01, 0x00, 0x00, 0xEF, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7C, 0x01, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x01, 0x00, 0x00, 0xEF, 0x03, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x6C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x58, 0x01, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x21, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x21, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x21, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x0C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x23, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xE4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x23, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x00, 0x00, 0x00, 0xA8, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xA8, 0x00, 0x00, 0x00, 0xB0, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00,
    0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00,
    0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00,
    0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00,
    0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00,
    0xB4, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xBC, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00,
    0xC4, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00,
    0xC4, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00,
    0xD4, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00,
    0xD4, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x60, 0x00, 0xF0,
    0x07, 0x00, 0x00, 0x00, 0x00, 0x60, 0x02, 0x00, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x60, 0x00, 0xF0,
    0x07, 0x00, 0x00, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0xC0, 0x00, 0xE0, 0x10, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
    0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x1C, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};


ActionExecFunc actions[] = {
    0
};


#if defined(EEZ_FOR_LVGL)

void ui_init() {
    eez_flow_init(assets, sizeof(assets), (lv_obj_t **)&objects, sizeof(objects), images, sizeof(images), actions);
}

void ui_tick() {
    eez_flow_tick();
    tick_screen(g_currentScreen);
}

#else

static int16_t currentScreen = -1;

static lv_obj_t *getLvglObjectFromIndex(int32_t index) {
    if (index == -1) {
        return 0;
    }
    return ((lv_obj_t **)&objects)[index];
}

void loadScreen(enum ScreensEnum screenId) {
    currentScreen = screenId - 1;
    lv_obj_t *screen = getLvglObjectFromIndex(currentScreen);
    lv_scr_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_IN, 200, 0, false);
}

void ui_init() {
    create_screens();
    loadScreen(SCREEN_ID_MAIN);
}

void ui_tick() {
    tick_screen(currentScreen);
}

#endif
