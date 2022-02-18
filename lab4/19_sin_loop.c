/***************************************************
 * 
19.  
Write a C program to find the value of sin(x) using
the series,

             x - x3/3! + x5/5! - x7/7! + x9/9! - ... up to N terms accuracy            (With and without using in-built function)
**********************************************************************************/

#include <stdio.h>
#include <math.h>

void main()
{
     float x1, sum, x, r=3;
     int i, n;
     printf("Enter the angle in degrees:");
     scanf("%f", &x);

     printf("Enter till which term the sum has to calculated:");
     scanf("%d", &n);
     x1=x;

     x=x*((22.0/7.0)/180.0);

     for (sum = x, i = 1; i <= n; i++)
     {
          float num = pow(x, r);
          float den=1.00;
          den = r*(r-1)*den;

          int sign = -1;

          sum = sign*(num/den)+sum;
          r=r+2;
          sign = sign*-1;

     }

     printf("math %lf\nloop %lf", sin(x1), sum);
}