#include <stdio.h>
int main()
{
   register int i;

   int myarray[4];


   myarray[0] = 100;
   myarray[1] = 200;
   myarray[2] = 300;
   myarray[3] = 400;
   
   for (i=0;i<4;i++)
   {
     
      printf("my array [%d] is %d \n", i, myarray[i]);
   }
   return 0;
}
