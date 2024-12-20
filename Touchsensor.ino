#include <avr/io.h>
#include <"delay.h">
int main(void)
{
  DDRB |= (1<<PB0);
  PORTB |= (1<<PB1);
  while(1)
  {
    if(PINB & (1<<PB1))
    {
      PORTB ^= (1<<PB0);
      delay_ms(500);
    }
      else
      {
        PORTB &= ~ (1<<PB0);
      }
    }
  }
