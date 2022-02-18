/* This program will print the first n fibonacci numbers */

#include <stdio.h>

void main()
{
    int n, x, count, a, b;

    printf("Enter the number upto which the fibonacci numbers has to be calculated:");
    scanf("%d", &n);

    a = 0, b = 1; // first 2 numbers of fibonacci series

    printf("Fibonacci series is %d, %d, ", a, b);

    for (count = 2; count < n; count++)
    {
        x = a + b; // findind next number of series
        printf("%d, ", x);
        a = b; // to calculate the next number
        b = x;
    }
}