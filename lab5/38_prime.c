/* This program tests whether a number is prime or not */

#include <stdio.h>

void main()
{
    int n, i, flag = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    if (n % 2 == 0) // even nubmers are not prime
    {
        flag = 0;
        goto END;
    }

    for (i = 2; i < n/2; i++)
    {
        if (n % i == 0) // if divisible then not prime
        {
            flag = 0;
        }
    }

END:
    if (flag == 1)
    {
        printf("The given number %d is PRIME NUMBER", n);
    }

    else
        printf("The given number %d is NOT A PRIME NUMBER", n);
}