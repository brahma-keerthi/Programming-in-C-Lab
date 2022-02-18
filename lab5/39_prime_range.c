/* This program will generate all the prime numbers in the given range*/

#include <stdio.h>

void main()
{
    int n1, n2, flag, i, j;

    printf("Enter the range upto which the prime numbers in that range has to be displayed:");
    scanf("%d", &n1);
    printf("to:");
    scanf("%d", &n2);

    printf("The prime numbers in the range %d to %d is\n", n1, n2);

    for (j = n1; j <= n2; j++) //range is as per user given
    {
        flag = 0;
        for (i = 2; i < j/2; i++)
        {
            if (j % i == 0) // checks for prime
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("      %d\n", j); 
        }// prints the prime numbers
    }
}