/* This program gives the biggest number amoung 3 numbers */
#include <stdio.h>

void main()
{

    int a, b, c;
    printf("Enter 3 numbers:");

    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the biggest amoung %d, %d and %d", a, a, b, c);
        }

        if (c > a)
        {
            printf("%d is the biggest amoung %d, %d and %d", c, a, b, c);
        }
    }

    if (a < b)
    {
        if (b > c)
        {
            printf("%d is the biggest amoung %d, %d and %d", b, a, b, c);
        }

        if (c > b)
        {
            printf("%d is the biggest amoung %d, %d and %d", c, a, b, c);
        }
    }
    if (a = b = c)
    {
        printf(" All three numbers %d, %d and %d are equal", a, b, c);
    }
    printf("\n\nPROCESS FINISHED!");
}