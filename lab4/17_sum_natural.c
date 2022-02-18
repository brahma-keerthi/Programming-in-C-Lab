/***************************************************************************
 * 17.  
Write a program to sum  natural, odd and even numbers up to ‘n’ .
****************************************************************************/

#include <stdio.h>
void main()
{
    int n,osum, esum, i;
    i = 1;
    esum=0;
    osum=0;

    printf("Enter upto which term the sum has to be calculated:");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            esum = esum + i;
        }

        if (i % 2 != 0)
        {
            osum = osum + i;
        }
        i++;
    }
    printf("The sum of first %d natural numbers is %d\n\n", n, osum+esum);
    printf("The sum of first %d even natural numbers is %d\n\n", n, esum);
    printf("The sum of first %d odd natural numbers is %d\n\n\a", n, osum);
}