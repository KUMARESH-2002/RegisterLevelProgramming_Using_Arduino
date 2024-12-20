#include<avr/io.h>
#include "i2c.h"
void setup()
{
  TWSR=0x00;
  TWBR=0x48;
  TWCR |= (1<<TWEN);
}
int main(void)
{
  i2c_start(0X55);
  i2c_write("HELLO");
  i2c_stop();
  
}
