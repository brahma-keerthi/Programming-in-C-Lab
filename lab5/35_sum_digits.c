/* This program will calculate the sum of the digits in a number */

#include <stdio.h>

void main()
{
    int n, digit, m, sum = 0;

    printf("Enter the number whose sum of the digits has to found out:");
    scanf("%d", &n);
    m = n;

AGAIN:
    while (m != 0)
    {
        digit = m % 10;    //finds the digit in the unit place
        sum = sum + digit; //finds sum of the digits
        m = m / 10;        // eliminates the digit at the units place
    }

    if (sum > 9)
    {
        m = sum; // to reduce the sum in to single digit
        sum = 0;
        goto AGAIN;
    }
    printf("The sum of the digits in the number %d is %d", n, sum);
}