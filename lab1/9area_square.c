/* This program gives the area of the square */
#include<stdio.h>
void main()
{
    printf("Enter the lenght:");
    float l, area;
    scanf("%f", &l);

    area=l*l;

    printf("The area of the square of the side lenght=%funits is area=%fsq units\n\n", l, area);
    printf("PROCESS FINISHED!");
}