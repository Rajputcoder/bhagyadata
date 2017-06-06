#include<stdio.h>

void show(void);

int main()
{
   show();
   show();
   show();
   
   return 0;
}

void show(void)
{
   auto int i = 1 ;
   printf ( "%d ", i ) ;
   i++;
}
