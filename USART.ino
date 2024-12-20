#include<avr/io.h>
#define FOSC 16000000// Clock Speed
 #define BAUD 9600
void USART_init()
{
  UCSR0B |= (1<< RXEN0)|(1<< TXEN0); //Enable receiver and transmitter
  UCSR0C |= (1<<  UCSZ01)|(1<<  UCSZ02)|(1<<USBS0);//Set frame format: 8data, 2stop bit
  UBRR0=103;
}

void USART_Transmit( const char* data)
{
  char i;
  const char* ptr = data;
  
  while ( !( UCSR0A & (1<<UDRE0))); //Wait for empty transmit buffer
  for(i=0;ptr[i]!='\0';i++)
  {
  UDR0 = ptr[i];//Put data into buffer, sends the data
}
}

int main(void)
{
 USART_init(); 
 USART_Transmit("KUMARESH");
 while(1)
 {
 }
 }
