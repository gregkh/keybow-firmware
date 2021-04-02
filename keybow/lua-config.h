#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#pragma once

extern int hid_output;
extern int midi_output;
extern int has_tick;
extern unsigned long long tick_start;
extern lua_State* L;

extern unsigned short last_media_keys;
extern unsigned short media_keys;
extern unsigned short modifiers;
extern unsigned short pressed_keys[14];

extern unsigned short mouse_buttons;
extern signed short mouse_x;
extern signed short mouse_y;

int initLUA();
void luaTick(void);
int luaHandleKey(unsigned short key_index, unsigned short state);
void luaClose(void);
void luaCallSetup(void);
