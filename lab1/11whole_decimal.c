/* This the program used to find the interal and decimal part of a number */
#include <stdio.h>
#include <math.h>
void main()
{
    printf("Enter a float point number:");
    float a,c;
    int b;

    scanf("%f", &a);

    b = a;
    c = (a - b);

    printf("The integral and decimal part of the number %f is %d and %f\n\n", a, b, c);
    printf("PROCESS FINISHED!");
}