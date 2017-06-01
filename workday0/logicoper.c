/*
 * logicoper.c
 *
 *  Created on: 30-May-2017
 *      Author: shree
 */

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a = b) && (c > b);
    printf("(a = b) && (c > b) equals to %d \n", result);

    result = (a = b) && (c < b);
    printf("(a = b) && (c < b) equals to %d \n", result);

    result = (a = b) || (c < b);
    printf("(a = b) || (c < b) equals to %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) equals to %d \n", result);

    result = (a = b) || (c < b);
     printf("(a = b) || (c < b) equals to %d \n", result);

    return 0;
}
