/* This program coverts the temperature from celsius to farenheit*/
#include <stdio.h>
void main()
{
    float c, f;
    printf("Enter the temperature in the degree celsius: ");
    scanf("%f", &c);

    f = c * 1.8 + 32;

    printf("The temperature %f degree celius in faranheit scale is %f farenheit\n\n", c, f);
    printf("PROCESS ENDED!");
}