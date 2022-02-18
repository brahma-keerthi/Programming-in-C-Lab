/*************************************************************************
 * 14.  
Write a program to input month number and
display number days in given month.

********************************************************************************/

#include <stdio.h>
void main()
{
    short unsigned int a;
    
    printf("Enter the month number:");
    AGAIN:
    scanf("%d", &a);

    switch (a)
    {

    case 1:
        printf("31 Days");
        break;

    case 2:
        printf("28 Days");
        break;

    case 3:
        printf("31 Days");
        break;

    case 4:
        printf("30 Days");
        break;

    case 5:
        printf("31 Days");
        break;

    case 6:
        printf("30 Days");
        break;

    case 7:
        printf("31 Days");
        break;

    case 8:
        printf("31 Days");
        break;

    case 9:
        printf("30 Days");
        break;

    case 10:
        printf("31 Days");
        break;

    case 11:
        printf("30 Days");
        break;

    case 12:
        printf("31 Days");
        break;

    default:
        printf("Your input os invalid.\n\nPlease enter the valid month number:");
        goto AGAIN;
        break;
    }
}