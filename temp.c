#include <stdio.h> 
#include <wiringPi.h> 
#include <ds18b20.h> 
#include <stdlib.h>
#include <stdlib.h>


int myTemp (void)
{
   time_t t;
   /* Intializes random number generator for the  device id*/
   srand((unsigned) time(&t));
   //printf("%d\n", rand() % 100000 +65);
   int id = rand() % 100000 +65;

   int temp;
   wiringPiSetupSys();

   ds18b20Setup (id, "00000c40d064") ;

   temp = analogRead(id) ;
   delay(500);
   return temp;
}
