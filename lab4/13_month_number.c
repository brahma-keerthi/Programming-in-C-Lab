/* Write a program to input month number and
display its respective month in words. Using the SWITCH statement
13.  
Write a program to input month number and
display its respective month in words.
******************************************************************** */

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
        printf("January");
        break;

    case 2:
        printf("February");
        break;

    case 3:
        printf("March");
        break;

    case 4:
        printf("April");
        break;

    case 5:
        printf("May");
        break;

    case 6:
        printf("June");
        break;

    case 7:
        printf("July");
        break;

    case 8:
        printf("August");
        break;

    case 9:
        printf("September");
        break;

    case 10:
        printf("October");
        break;

    case 11:
        printf("November");
        break;

    case 12:
        printf("December");
        break;

    default:
        printf("Your input os invalid.\n\nPlease enter the valid month number:");
        goto AGAIN;
        break;
    }
}