#include<avr/io.h>
#include<util/delay.h>
#include<stdbool.h>

int main(void)
{
  bool z;
  bool x=0, y=0;
  DDRB |= (1<<PINB5);
  DDRD |= 0b00000000;
  PORTD |= 0b00001100;
  while(1){
    x = (PIND & (1<<PIND2))==(1<<PIND2);
    y = (PIND & (1<<PIND3))==(1<<PIND3);
    z = (!x) & (y) | (x) & (!y);
    if(z){
      PORTB = (1<<PB5);}
    else{
      PORTB =! (1<<PB5);}}
  return 0;
}
