/* This is a program used to calculate the electric bill */
/**********************************************************
            Unit Price Criteria:
Units Consumed             Unit Price (Rs.)
--------------             ----------------
    0 - 50		               Rs. 1.65
	51 - 100	               Rs. 3.85
	101 – 150                  Rs. 7.35
	151 and above       	   Rs. 11.75
******************************************************/

#include <stdio.h>

#define PART1 50*1.65
#define PART2 50*1.65 + 50*3.85
#define PART3 50*1.65 + 50*3.85 + 50*7.35

void main()
{
    char a[100];
    int b, bill;
    int units;

    printf("Enter the Account Holder Name:");
    scanf("%s", &a);

    printf("Enter the RR number :");
    scanf("%d", &b);

    printf("Enter the UNITS used :");
    scanf("%d", &units);

    if(units <= 50)
    {
        bill=units*1.65;
    }

    if(units > 50 && units <=100)
    {
        bill = PART1 + (units - 50)*3.85;
    }

    if(units >100 && units <=150)
    {
        bill = PART2 + (units - 100)*7.35;
    }

    if(units > 150)
    {
        bill = PART3 + (units - 150)*11.75;
    }

    printf("*****************************************************\n");
    printf("                  ** ELECTRIC BILL **                \n");
    printf("ACCOUNT HOLDER NAME: %s\n", a);
    printf("RR NUMBER: %d\n", b);
    printf("UNITS CONSUMED: %d\n", units);
    printf("BILL AMOUNT: %d ruppee\n", bill);
    printf("*****************************************************");
}

