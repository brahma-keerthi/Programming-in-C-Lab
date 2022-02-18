// This program tell whether the number is positive or negative
#include<stdio.h>
void main()
{
    float a;
    printf("Enter a number:");
    scanf("%f", &a);

    if(a>=0)
    {
        printf("The number %f is POSITIVE", a);
    }

    else
    {
        printf("The number %f is NEGATIVE", a);
    }
}