/*************************************************************************************
 * 18.  
Write a program to find the factorial of a given
number ‘n’.
***************************************************************************************/

#include<stdio.h>
void main()
{
    int n, i, a=1;

    printf("Enter the number whose factorial has to be found out:");
    scanf("%d", &n);
   /* i=n;
    a=1;

    do
    {
        a=a*i;
        i--;
    } while (i>1);*/

    for(i=1; i<=n; i++)
    {
        a = a * i;
    }
    

    printf("The factorial of %d is %d", n, a);
    
}