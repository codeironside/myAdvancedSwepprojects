
int main(void){
  //registers are temporary storage locationinside the cpu that hold data and addresses
  //setuphere
  //code to run once
  DDRB |= (1<<PINB2);
//  DDRB &= ~(1<<PINB2)

  while(1){
    //cxode to run forever
    PORTB |= (1<<PINB2);
  }
  return 0;
}
