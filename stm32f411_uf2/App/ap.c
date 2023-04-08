/*
 * ap.c
 *
 *  Created on: Feb 16, 2023
 *      Author: baram
 */


#include "ap.h"


extern int tinyuf2(void);



void apInit(void)
{
  ledInit();
  buttonInit();
}

void apMain(void)
{
  tinyuf2();
}

