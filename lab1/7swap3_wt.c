/*This is a program to swap 3 numbers without using temp*/
#include<stdio.h>
void main ()
{
    int num1, num2, num3;

    printf("Give three numbers which has to be swapped:");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Before swapping:\n  num1=%d\n  num2=%d\n  num3=%d\n\n", num1, num2, num3);

    num1 = num1+num2+num3;
    num2 = num1-num2-num3;
    num3 = num1-num2-num3;
    num1 = num1-num2-num3;

    printf("After swapping:\n  num1=%d\n  num2=%d\n  num3=%d\n\n", num1, num2, num3);
    printf("PROCESS FINISHED!");
    
}