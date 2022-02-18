/* This program gives the area of the triangle based on the heron's formula */
#include<stdio.h>
#include<math.h>

void main ()
{
    float a, b, c, s, area;
    printf("Give the three sides of the triangle:");
    scanf("%f%f%f", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("The area of the triangle of sides %f, %f, %f units is area=%fsq units\n\n", a, b, c, area);
    printf("PROCESS FINISHED!");


}