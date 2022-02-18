/* This program gives the last digit of the integral digit of the float data type*/
#include <stdio.h>

void main()
{
    float a;
    int c;

    printf("Enter a decimal number:");
    scanf("%f", &a);

    c=a;
    c=c%10;
    

    printf("The last integral digit in the number %f is %d\n\n", a, c);
    printf("Process Finished!");
}