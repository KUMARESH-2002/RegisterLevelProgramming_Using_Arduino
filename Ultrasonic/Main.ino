#include<avr/io.h>
#include "ultrasonic.h"
#include"doubletostring.h"
#include"USART.h"

int main(void)
{
  double distance;
  char distance_text[10];
  USART_init();
  UltrasonicInit();
  triggerUltrasonic();
  echoUltrasonicDuration();
  distance=distanceUltrasonic();
  doubleToString(distance,distance_text);
  USART_Transmit(distance_text);
}
