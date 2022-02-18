/* This program gives the biggest of two numbers */

#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter the two numbers for comparition:");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("The biggest number amoung %d and %d is %d", a, b, a);
    }

    if (b > a)
    {
        printf("The biggest number amoung %d and %d is %d", a, b, b);
    }

    if(a==b)
    {
        printf("The numbers %d and %d are equal", a, b);
    }
}