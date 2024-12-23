#define LED PB7

void setup()
{
  UCSR0B = (1 << RXEN0) | (1 << TXEN0);
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
  UBRR0=103;
  PORTB &= (1<< LED);
}
int main(void)
{
  char data,command;
  while(!(UCSR0A&(1<<UDRE0)));
  UDR0 = data;
  while(!(UCSR0A&(1<<UDRE0)));
  command=UDR0;
  if (command==1)
  {
    PORTB |=(1<< LED);
  }
  else
  {
    PORTB &= (1<< LED);
  }
}
