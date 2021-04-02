#include <bcm2835.h>
#include <pthread.h>
#include "lights.h"
#include "lua-config.h"

#define NUM_KEYS 12

#ifndef KEYBOW_HOME
#define KEYBOW_HOME "/boot/"
#endif

extern pthread_mutex_t lights_mutex;

extern int lights_auto;

typedef struct keybow_key {
    unsigned short gpio_bcm;
    unsigned short hid_code;
    unsigned short led_index;
} keybow_key;

extern unsigned short mapping_table[36];

void *run_lights(void *void_ptr);
keybow_key get_key(unsigned short index);
int initUSB();
int initGPIO();
int main();
