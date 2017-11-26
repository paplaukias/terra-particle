#ifndef LCD_CONTROLLER_H
#define LCD_CONTROLLER_H

#include "LiquidCrystal_I2C_Spark.h"

struct LcdController {
  LcdController();
  void timerIsr();

private:
  int currHour;
  int currMinute;
  int currSecond;

  void updateScreen();
};

#endif