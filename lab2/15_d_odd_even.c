/* This program tells whether a number is odd or even using a ternary operator */

#include <stdio.h>

void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    (a % 2 == 0) ? (printf("The given number %d is an even number", a)) : (printf("The given number %d is an odd number", a));
}