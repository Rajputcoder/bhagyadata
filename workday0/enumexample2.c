/*
 * enumexample2.c
 *
 *  Created on: 30-May-2017
 *      Author: shree
 */

#include<stdio.h>

enum month
{
	JAN=1,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	DEC
};
int main()
{
enum month i;

     for(i=JAN;i<=DEC;i++)
	      printf("\n%d\n",i);

}
