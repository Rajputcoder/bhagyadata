#include<stdio.h>

int main()
{
int x=10;

int *ptr;

ptr = &x;

printf("value of variable is =%d \n",*ptr);

printf("address of variable is=%p \n",ptr);

*ptr=20;

printf("after modifications value is=%d \n",*ptr );

}
