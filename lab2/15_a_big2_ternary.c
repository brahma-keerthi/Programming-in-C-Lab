/* This program gives the biggest of 2 numbers using the ternary operators */
#include <stdio.h>

void main()
{
    printf("Enter 2 integer numbers :");

    int a, b, big;
    scanf("%d%d", &a, &b);

    if (a == b)
    {
        printf("Both numbers %d and %d are equal", a, b);
    }
    else
    {

        big = (a > b) ? a : b;

        printf("The biggest number amoung %d and %d is %d", a, b, big);
    }
}