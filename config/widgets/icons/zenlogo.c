/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ZENLOGO
#define LV_ATTRIBUTE_IMG_ZENLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ZENLOGO uint8_t
    zenlogo_map[] = {
       {
  0x00, 0x00, 0x00, 0x07, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xf8, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x30, 0x00, 
  0x00, 0x00, 0x00, 0xf0, 0x00, 
  0x00, 0x00, 0x01, 0xf0, 0x00, 
  0x00, 0x00, 0x03, 0xe0, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x00, 0x0f, 0x80, 0x00, 
  0x00, 0x00, 0x0e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0x80, 0xff, 0x00, 
  0x00, 0xff, 0xf7, 0xff, 0x80, 
  0x01, 0xff, 0xff, 0xff, 0xc0, 
  0x03, 0xff, 0xff, 0xff, 0xe0, 
  0x03, 0xff, 0xff, 0xff, 0xc0, 
  0x07, 0xff, 0xff, 0xff, 0x80, 
  0x07, 0xff, 0xff, 0xff, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0x00, 
  0x0f, 0xff, 0xff, 0xfe, 0x00, 
  0x0f, 0xff, 0xff, 0xfe, 0x00, 
  0x0f, 0xff, 0xff, 0xfe, 0x00, 
  0x0f, 0xff, 0xff, 0xfe, 0x00, 
  0x0f, 0xff, 0xff, 0xfe, 0x00, 
  0x0f, 0xff, 0xff, 0xfe, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0x80, 
  0x07, 0xff, 0xff, 0xff, 0x80, 
  0x07, 0xff, 0xff, 0xff, 0xe0, 
  0x07, 0xff, 0xff, 0xff, 0xf0, 
  0x03, 0xff, 0xff, 0xff, 0xf0, 
  0x03, 0xff, 0xff, 0xff, 0xe0, 
  0x03, 0xff, 0xff, 0xff, 0xe0, 
  0x01, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x7f, 0xff, 0xff, 0x80, 
  0x00, 0x3f, 0xff, 0xff, 0x00, 
  0x00, 0x1f, 0xeb, 0xfe, 0x00, 
  0x00, 0x0f, 0x00, 0x78, 0x00, 
};

const lv_img_dsc_t zenlogo = {
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 40,
    .header.h = 40,
    .data_size = 208,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = zenlogo_map,
};
