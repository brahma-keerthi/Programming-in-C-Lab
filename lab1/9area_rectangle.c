/* This program gives the area of the rectangle */
#include<stdio.h>
void main ()
{
    float l, b, area;
    printf("Enter lenght and breadth:");
    scanf("%f%f", &l, &b);

    area=l*b;
    printf("The area of the rectangle of given lenght=%funits and breadth=%f is area=%fsq units\n\n", l , b, area);
    printf("PROCESS FINISHED!");
}