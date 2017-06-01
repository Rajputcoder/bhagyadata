/*
 * bitwiseand.c
 *
 *  Created on: 30-May-2017
 *      Author: shree
 */

#include<stdio.h>

int main()
{
	int a=12,b=25;
	printf("after bitwise AND operation=%d\n",a&b);
	printf("after bitwise OR operation=%d\n",a|b);
	printf("after bitwise XOR operation=%d\n",a^b);
	printf("after bitwise negation operation=%d\n",~a & 0xFF);

}
