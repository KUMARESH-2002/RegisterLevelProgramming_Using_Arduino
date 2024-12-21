#include "delay.h"
void lcd_data(unsigned char data)
{
  PORTD=data;
  PORTB |=(1<<PB2);    //RS=1
  PORTB &=(~(1<<PB3)); //RW=0
  PORTB |=(1<<PB4);    //EN=1
  delay_ms(10);        //delay 10ms
  PORTB &=(~(1<<PB2)); //EN=0
  }
  void lcd_cmd(unsigned char command)
    PORTD=command;
  PORTB &=(~(1<<PB4));  //RS=0
  PORTB &=(~(1<<PB3));  //RW=0
  PORTB |=(1<<PB2);     //EN=1
  delay_ms(10);         //delay 10ms
  PORTB &=(~(1<<PB2));  //EN=0
  }
  void lcd_string(const char *str,unsigned char len)
  {
    char i=0;
    for(i=0;i<len;i++)
    {
      lcd_data(str[i]);
    }
  }
  void lcd_init()
  {
  lcd_cmd(0X38);
  lcd_cmd(0X0E);
  lcd_cmd(0X06);
  lcd_cmd(0X01);
  }
