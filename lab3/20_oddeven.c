// This is a program to find whether the number is a odd or even
#include <stdio.h>
void main ()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if ( a%2==1)    // here % gives the remainder of the division and == symbol gives equal to meaning
    {
        printf("The number you have entered is an ODD number.");
    }
    if ( a%2==0)
    {
        printf("The number you have entered is an EVEN number.");
    }
    if ( a<0) 
    {
        printf("The number you have entered is not valid.");
    }
}