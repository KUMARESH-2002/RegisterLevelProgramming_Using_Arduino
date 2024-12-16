#include<avr/io.h>
#include"delay.h"

int main(void)
{
  DDRB |= (1<<DDB5);
  while(1)
  {
    PORTB ^= (1<<PB5);
    delay_ms(1000);
  }
}
