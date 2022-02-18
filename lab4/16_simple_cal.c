/* Simple calsi using switch statement */
#include <stdio.h>
void main()
{
    long int a, b;
    char x;

    printf("This is a simple calculator u can perform any of add , sub , multi, divi or mod:\n");
    printf("Enter the expression:");
    scanf("%d%c%d", &a, &x, &b);

    switch (x)
    {
    case '+':
        printf("%d %c %d = %d", a, x, b, a + b);
        break;

    case '-':
        printf("%d %c %d = %d", a, x, b, a - b);
        break;

    case '*':
        printf("%d %c %d = %d", a, x, b, a * b);
        break;

    case '/':
        printf("%d %c %d = %d", a, x, b, a / b);
        break;

    case '%':
        printf("%d %c %d = %d", a, x, b, a % b);
        break;
    }
}