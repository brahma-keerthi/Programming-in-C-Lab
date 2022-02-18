/* This program tells whether the number is positive or negative using the ternary operators*/

#include <stdio.h>

void main()
{
    int a;

    printf("Enter the number:");
    scanf("%d", &a);

    (a >= 0) ? (printf("The given number %d is a positive number", a)) : (printf("The given number %d is negative number", a));
}