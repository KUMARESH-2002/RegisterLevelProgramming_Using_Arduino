
#include<avr/io.h>

 void delay_ms(int);

 void delay_ms(int temp)
{
  int i=0;
  TCCR1A|=(1<< COM1A1)|(1<< COM1A0);
  TCCR1B|=(1<<WGM12)|(1<<CS10)|(1<<CS12);
  TCNT1L=0;
  OCR1AL=15.625;
    for(i=0;i<temp;i++) 
    {
      TIFR1|=(1<<OCF1A);

      while(!(TIFR1&(1<<OCF1A)));
    }
  
}
