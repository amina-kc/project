/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */


//#include "stm32f7xx.h"
//#include "stm32f769i_discovery.h"
#include <zephyr.h>
#include <device.h>
#include <drivers/gpio.h>
#include <tft.h>
#include <touchpad.h>
#include <lvgl.h>
#include "lv_examples/lv_tests/lv_test_theme/lv_test_theme_2.h"

//static void SystemClock_Config(void);
//static void CPU_CACHE_Enable(void);

int main(void)
{


	//HAL_Init();
	//SystemClock_Config();
	lv_init();
	tft_init();
	//touchpad_init();
	demo_create();
	//benchmark_create();
	//lv_test_theme_2(); */

	while(1) {
		lv_task_handler();
		k_sleep(5);
		
	}
}

