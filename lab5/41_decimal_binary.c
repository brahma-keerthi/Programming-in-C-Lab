/* This program will convert the given number into binary digits */

#include <stdio.h>

void main()
{
    long int rev = 0;
    int num, bin, i = 1;

    printf("Enter a number which has to converted into binary form:");
    scanf("%d", &num);

    while (num != 0)
    {
        bin = num % 2;         // To find the digit at the units place
        num = num / 2;         // To eliminate the number in the units place
        rev = rev + bin * (i); // dividing by 2 and finding the reverse order
        i = i * 10;
    }
    printf("The binary form is %010ld", rev);
}