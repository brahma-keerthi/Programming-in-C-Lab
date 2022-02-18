/* This is a program to swap 3 numbers using temp */
#include<stdio.h>
void main ()
{
    int num1, num2, num3, temp;

    printf("Give three numbers which has to be swapped:");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Before swapping:\n  num1=%d\n  num2=%d\n  num3=%d\n\n", num1, num2, num3);

    temp=num1;
    num1=num2;
    num2=num3;
    num3=temp;

    printf("After swapping:\n  num1=%d\n  num2=%d\n  num3=%d\n\n", num1, num2, num3);
    printf("PROCESS FINISHED!");
    
}