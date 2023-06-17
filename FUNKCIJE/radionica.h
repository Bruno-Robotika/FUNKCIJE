#pragma once
#include "helper.h"


void RobotLine::radionica() {
  if (setup()) {
    armOpen();
  }
  if (rightFront() > 200)
    go(80, 20);
  else
    go(20, 80);

  if (front() < 160) {
    go(-90, 90);
    delayMs(550);
  }


}


