#pragma once
 #include "helper.h"

void RobotLine::radionica(){

static int brojac = 0;
char simbol[10 + sizeof(char)];



Pratiliniju();

  if (brojac == 0 && line(0) && line(8)) {
    go(-90, 90);
    delayMs(500);
    brojac = brojac+1;

}
  if (brojac == 1 && line(6) && line(8)) {
    go(90, 90);
    delayMs(500);
    brojac = brojac+1;

}

if  (brojac == 2 && line(6) && line(8)) {
    go(-90, 90);
    delayMs(1000);
    brojac = brojac+1;


}

if  (brojac == 3 && line(6) && line(8)) {
    go(90, -90);
    delayMs(200);
    brojac = brojac+1;
}


if (pitch() < -10 && line(0) && line(8)) {
    go(50, 50);
    delayMs(500);

  }




  sprintf(simbol,"%d",brojac);
  display(simbol);
}

  
