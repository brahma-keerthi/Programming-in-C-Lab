/* This program will check whether the number is a palidromic or not */

#include <stdio.h>

void main()
{
    int n, dig, rev=0, m;

    printf("Enter a number which has to undergo for the test of the palidromicity:");
    scanf("%d", &n);
    m=n;

    while(m!=0)
    {
        dig=m%10; // gives the number in the unit place
        rev = rev*10 + dig; //to find the rev of the given number
        m=m/10;
    }

    if(n==rev)
    printf("The given number %d is PALIDROMIC", n);

    else
    printf("The given number %d is NOT PALIDROMIC", n);
}