#include<avr/io.h>
#include"lcd.h"
  void setup()
  {
  DDRD=0XFF;
  DDRB|=(1<<PB2)|(1<<PB3)|(1<<PB4);
  lcd_init();

  int main()
  {
  while(1)
    {
    lcd_cmd(0X80);
    lcd_string("HELLO",5);
    lcd_cmd(0XC0);
    lcd_string("HOW ARE YOU",11);
    }
  }
