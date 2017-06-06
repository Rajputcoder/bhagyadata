#include<stdio.h>

int myvalue = 100 ;

int main( )
{

extern int yourvalue;
printf("myvalue is %d \n",myvalue);
printf("yourvalue is %d",yourvalue);

return 0;
}

int yourvalue=50;
