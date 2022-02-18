/* This is the program used to swap the 2 numbers without using a temporary variable*/
#include<stdio.h>

void main()
{
    int num1, num2;

    printf("Give two numbers which has to undergo swapping:");
    scanf("%d%d", &num1, &num2);

    printf("The numbers before swapping\n  num1=%d\n  num2=%d\n\n", num1, num2);

    num1 = num1+num2;
    num2= num1-num2;
    num1= num1-num2;

    printf("The numbers after swapping\n  num1=%d\n  num2=%d\n\n", num1, num2);
    printf("PROCESS FINISHED!");
    
}