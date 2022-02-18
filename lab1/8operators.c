/*   This is the program to execute basic operations such as +,-,*,/,%   */
#include<stdio.h>
void main ()
{
    float a,b,c,d,f,e;
    int g, h, i;

    printf("Enter two numbers which has to undergo operations:");
    scanf("%f%f", &a, &b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    i=a;
    h=b;
    g=i%h;
    

    printf("The addition of %f and %f is :\n %f+%f=%f\n\n", a, b, a, b, c);
    printf("The difference of %f and %f is :\n %f-%f=%f\n\n", a, b, a, b, d);
    printf("The product of %f and %f is :\n %f*%f=%f\n\n", a, b, a, b, e);
    printf("The quotient when %f is divided by %f is :\n %f/%f=%f\n\n", a, b, a, b, f);
    printf("The remainder when %f is divided by %f is :\n %d \n\n", a, b, g);
    printf("PROCESS FINISHED!");
}