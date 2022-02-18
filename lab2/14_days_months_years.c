/* This program converts the number of days into months and years */
#include <stdio.h>

void main()
{
    printf("Enter the number of days:");

    int a, d, m, y;

    scanf("%d", &a);

    y = a / 365;
    m = (a % 365)/30;
    d = (a % 365) % 30;

    printf("The %d days is equivalent to %d years, %d months and %d days\n\n", a, y, m, d);
    printf("PROCESS FINISHED!");
}