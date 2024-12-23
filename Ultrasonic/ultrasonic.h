#include<avr/io.h>
#include"delay.h"

#define TRIGGER PB6
#define ECHO PB7
void UltrasonicInit()
{
  DDRB &= ~(1 << TRIGGER);
  DDRB &= ~(1 << ECHO);
}

void triggerUltrasonic()
{
  PORTB |= (1 << TRIGGER);
  delay_ms(10);
  PORTB &= ~(1 << TRIGGER);
}

uint16_t echoUltrasonicDuration()
{
  uint16_t sigduration;
  TCCR1B |= ((1 << CS11) | (1 << CS10));
  TCNT1 = 50536;
  while (PINA & (1 << ECHO));
  sigduration= TCNT1-50536;
  return (sigduration);  
}

double distanceUltrasonic()
{
  uint16_t duration,distance;
  
  triggerUltrasonic();
  while (!(PINB & (1 << ECHO)));
  duration = echoUltrasonicDuration();
  distance = duration/58;
  return(distance);
}
