/* This program illustrates the use of the postfix or prefix increment or decrement operator */

#include <stdio.h>

void main()
{
    int a, b, c, d;

    a=4;
    b=9;
    c=10;
    d=93;

    a = a++;
    b = b--;
    c = ++c;
    d = --d;

    printf("The value of \n  a=%d\n  b=%d\n  c=%d\n  d=%d", a, b, c, d);
}