#include "ceu_os.h"

extern tceu_app serial_drv;
extern tceu_app serial_app;
tceu_lnk lnk1 = { &serial_app,1  ,  &serial_drv,245, NULL };
tceu_lnk lnk2 = { &serial_app,2  ,  &serial_drv,244, NULL };
tceu_lnk lnk3 = { &serial_app,3  ,  &serial_drv,243, NULL };
tceu_lnk lnk4 = { &serial_drv,1  ,  &serial_app,242, NULL };

extern tceu_app gpio_drv;
extern tceu_app gpio_app;
tceu_lnk lnk5 = { &gpio_app,1    ,  &gpio_drv,245, NULL };
tceu_lnk lnk6 = { &gpio_app,2    ,  &gpio_drv,244, NULL };
tceu_lnk lnk7 = { &gpio_drv,1    ,  &gpio_app,243, NULL };

void MAIN (void) {
	ceu_sys_link(&lnk1);
	ceu_sys_link(&lnk2);
	ceu_sys_link(&lnk3);
	ceu_sys_link(&lnk4);
	ceu_sys_start(&serial_drv);
	ceu_sys_start(&serial_app);

	ceu_sys_link(&lnk5);
	ceu_sys_link(&lnk6);
	ceu_sys_link(&lnk7);
	ceu_sys_start(&gpio_drv);
	ceu_sys_start(&gpio_app);
}
