/* This program convert the binary number to decimal */

#include <stdio.h>
#include <math.h>

void main()
{
    long int n, num;
    int i, dig;

    printf("Enter the binary number:");
    scanf("%d", &n);

    for (i = 0, num = 0; n != 0; i++)
    {
        dig = n % 10;                       //To find the units place
        num = num + dig * pow(2, i);// to multiply the number with the 2 exponents add it
        n = n / 10;// to eliminate the number in the units place
    }

    printf("The decimal form of the given number is %d", num);
}