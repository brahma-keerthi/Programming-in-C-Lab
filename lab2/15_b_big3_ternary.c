/* this program gives the biggest three numbers using the ternary operators */

#include <stdio.h>

void main()
{
    int a, b, c, big;

    printf("Enter three which have to be compared:");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && b==c)
    printf("The three numbers %d, %d and %d are equal",a,b,c);
    else
    {
    big = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The biggest number of %d, %d and %d is %d", a, b, c, big);
    }
}