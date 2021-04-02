#include <linux/usb/ch9.h>
#include <usbg/usbg.h>
#include <usbg/function/hid.h>

#define VENDOR          0x1d6b
#define PRODUCT         0x0104
#define HID_REPORT_SIZE 16
#define MOUSE_REPORT_SIZE 3

extern usbg_state *s;
extern usbg_gadget *g;
extern usbg_config *c;
extern usbg_function *f_hid;
extern usbg_function *f_midi;
extern usbg_function *f_acm0;

int initUSB();
int cleanupUSB();
