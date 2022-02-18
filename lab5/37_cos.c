#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int i=0, n, r, sign=-1;
    float x, x1, num, den=1, sum;

    printf("Enter the degrees: ");
    scanf("%f", &x);

    printf("Enter the num of terms: ");
    scanf("%d", &n);

    x1=x;
    x=((22.0/7.0)/180)*x;

    for(sum=1,r=2; i<n; i++)
    {
        num = pow(x, r);
        den = den *r*(r-1);

        sum = sum+ (num/den)*sign;

        r=r+2;
        sign = sign*-1;
    }

    printf("Math = %f\nLoop = %f", cos(x), sum);
}