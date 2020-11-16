#include <wiringPi.h>
#include <stdio.h>

int redLed ()
{
  wiringPiSetup () ;
  pinMode (1, OUTPUT) ;
  digitalWrite (1, HIGH);   
  delay(3000);
  digitalWrite (1,  LOW) ;
  
  return 1;
}

void greenLed ()
{
  wiringPiSetup () ;
  pinMode (0, OUTPUT) ;
  digitalWrite (0, HIGH);   
  delay(3000);
  digitalWrite (0,  LOW) ; 
}
