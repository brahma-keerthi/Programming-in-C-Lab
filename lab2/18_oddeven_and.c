/* This program uses the and logical operator to distinguish between the odd and the even number */
#include <stdio.h>
void main()
{
    int a, x;
    printf("Enter the number which has to be distinguished to odd or even :");
    scanf("%d", &a);

    x = a & 1;

    (x == 0) ? (printf("The given number %d is EVEN ", a)) : (printf("The given number %d is ODD", a));
}