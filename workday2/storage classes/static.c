//C static example
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
static int i = 1 ;
printf ( "%d ", i ) ;
i++;
}
