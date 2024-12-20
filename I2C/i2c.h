#include<avr/io.h>
#include <Arduino.h>
void i2c_start(uint8_t address)
{
  TWCR |=(1<<TWSTA)|(1<<TWINT);
  while(!(TWCR &(1<<TWINT)));
  TWDR = (address << 1);
  TWCR |= (1<<TWINT);
}
void i2c_write(const char* data)
{
  while(!(TWCR &(1<<TWINT)));
  char i;
  const char* ptr = data;
  for(i=0;ptr[i]!='\0';i++)
  {
  TWDR = ptr[i];
  }
TWCR |=(1<<TWINT);
}
void i2c_stop()
{
  while(!(TWCR &(1<<TWINT)));
  TWCR |= (1<<TWSTO)|(1<<TWINT);
}
