#include <stdio.h>
#include <stdlib.h>

int main () {
   time_t t;
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
    printf("%d\n", rand() % 100000 +65);
   return(0);
}
