#include<stdio.h>

typedef unsigned int INTA;

int main()
{

struct sample1
{
INTA var1;
INTA var2;
char arr[6];
};

struct sample2
{
INTA var1 : 2;
INTA var2 : 5;
char arr[6] ;
};

struct sample1 s1;
struct sample2 s2;
printf("memory occupied by sample1 is =%d \n",sizeof(s1.var1));
printf("memory occupuied by sample2 is=%d \n",sizeof(s2.arr));
}
