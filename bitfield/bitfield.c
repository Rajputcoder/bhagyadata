#include<stdio.h>

typedef unsigned int INT1;
int main()
{

struct test
{

INT1 d : 4;
INT1 m : 5;
INT1 y;

};
struct test t1={20,1,1993}; 
printf("size of %d\n",sizeof(t1));
printf("date: %d \n month: %d \n year: %d",t1.d,t1.m,t1.y);
return 0;
}
