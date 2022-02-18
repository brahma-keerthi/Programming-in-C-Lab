/* This program illustrates the bitwise operators */

#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter 2 digits:");
    scanf("%d%d", &a, &b);

    printf("AND OPERATION: %d & %d is %d\n", a, b, a&b);
    printf("OR OPERATION: %d | %d is %d\n", a, b, a|b);
    printf("COMPLEMENT OPERATION: %d ~ is %d\n", a, ~a);
    printf("LEFT SHIFT OPERATOR: %d << 2 is %d\n", b, b<<2);
    printf("RIGHT SHIFT OPERATOR: %d >> 2 is %d\n", b, b>>2);
    printf("EXCLUSIVE OR OPERATOR: %d ^ %d is %d", a, b, a^b);

}
