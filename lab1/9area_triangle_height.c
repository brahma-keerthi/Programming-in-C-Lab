/* This program will give the area of the triangle based of its height and base */
#include<stdio.h>
void main()
{
    float b, h, area;
    printf("Give the height and the base of the triangle:");
    scanf("%f%f", &b, &h);

    area=(b*h)/2;

    printf("The area of the trinagle of base=%funits and heigth=%funits is area=%fsq units.\n\n", b, h, area);
    printf("PROCES FINISHED!");

    
}