/*
 * button.c
 *
 *  Created on: 2023. 2. 27.
 *      Author: hancheol
 */


#include "button.h"



bool buttonInit(void)
{
  return true;
}

bool buttonGetPressed(uint8_t ch)
{
  bool ret = false;


  switch(ch)
  {
    case _DEF_CH1:
      if (HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin) == GPIO_PIN_RESET)
      {
        ret = true;
      }
      break;
  }

  return ret;
}

uint32_t buttonGetData(uint8_t ch)
{
  uint32_t ret = 0;


  for (int i=0; i<BUTTON_MAX_CH; i++)
  {
    ret |= (buttonGetPressed(i)<<i);
  }

  return ret;
}
