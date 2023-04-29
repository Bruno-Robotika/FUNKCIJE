#pragma once
#include "helper.h"


void RobotLine::radionica(){
static int brojac = 0;
  
if (line(0) and line(8) and brojac == 0) {
    go(-90, 90);
    delayMs(500);
    brojac = brojac + 1;

  }
else if (line(8) and line(5) and brojac== 2) {
    go(90, 90);
    delayMs(500);
    brojac = brojac + 1;
  }
  
 else if (front()> 140 and front() < 160 and brojac == 1) {
    go(-90, 90);
    delayMs(500);
    go(50, 50);
    delayMs(1000);
    go(90, -90);
    delayMs(500);
    go(50, 50);
    delayMs(2000);
    go(90, -90);
    delayMs(500);
    go(50, 50);
    delayMs(300);
    go(-90, 90);
    delayMs(500);
    brojac = brojac + 1;
  }
  

 else if (line(8) and line(0) and brojac== 3) {
    go(-110, 90);
    delayMs(1000);
    brojac = brojac + 1;
  }

  else if (line(4) and line(4) and brojac== 4) {
    go(90,-90);
    delayMs(500);
    brojac = brojac + 1;
  }

  else if (line(5) and line(0) and brojac== 5) {
  if (pitch() < -10) {
    go(100, 100);
    delayMs(400);

  }

}

  
else{
  Pratiliniju();
}





char simbol[10 + sizeof(char)];
sprintf(simbol,"%d",brojac);
display(simbol);
}



