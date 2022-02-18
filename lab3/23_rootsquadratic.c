/* This is a program to find the roots of the quaratic equation */
#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, d, g, h;

AGAIN:
    printf("Coefficient of x*x = ");
    scanf("%f", &a);

    if (a == 0)
    {
        printf("Invalid Input!! Please give a non-zoer input!!");
        goto AGAIN;
    }

    printf("\nCoefficient of x = ");
    scanf("%f", &b);

    printf("\nConstant = ");
    scanf("%f", &c);

    printf("The quadratic equation is\n %.2fx*x + %.2fx + %.2f\n\n\n", a, b, c);

    d = (b * b - 4 * a * c); /* This is th determinant which decides the nature of roots*/

    if (d >= 0)
    {
        g = (-b + sqrt(d)) / (2 * a); /* calculation of two roots */
        h = (-b - sqrt(d)) / (2 * a);

        if (g != h)
        {
            printf("The roots are distint and they are %.2f and %.2f.", g, h); /* For real and distinct roots */
        }

        if (g == h)
        {
            printf("The two are same and the root is %.2f.", g); /* For real and equal roots */
        }
    }

    if (d < 0)
    {
        printf("There are no real roots."); /* For complex roots or unreal roots */
    }
}