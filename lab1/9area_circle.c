/* This program gives the area of the circle */
#include<stdio.h>
#define PI 3.14
void main ()
{
    float r, area;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area=PI*r*r;

    printf("The area of the circle of the radius=%funits is area=%fsq units.\n\n", r, area);
    printf("PROCESS FINISHED!");
}