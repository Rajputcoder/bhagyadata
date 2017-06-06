#include <stdio.h>
 
const int MAX = 6;
 
int main () {

   char *names[] = {
      "bhagya",
      "kajal",
      "suyog",
      "aditya",
      "pranjal",
      "shubham"
   };
   
   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   
   return 0;
}
