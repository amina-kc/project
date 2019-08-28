# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.8.2)

set(BOARD stm32f769i_disco)
include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(littlevgl_stm32f769)

target_sources(app PRIVATE src/main.c)
target_sources(app PRIVATE src/stm32f7xx_it.c)
#FILE(GLOB app_sources src/*.c)
#FILE(GLOB app_sources /home/amina/project/modules/hal/stm32/stm32cube/stm32f7xx/drivers/src/lv_examples/*/*/*.c)
FILE(GLOB app_sources /home/amina/project/modules/hal/stm32/stm32cube/stm32f7xx/drivers/src/lv_examples/lv_apps/demo/img_bubble_pattern.c)

include_directories(/home/amina/project/modules/hal/stm32/stm32cube/stm32f7xx/drivers/include)
include_directories(/home/amina/project/modules/hal/stm32/stm32cube/stm32f7xx/drivers/src)

target_sources(app PRIVATE ${app_sources})

