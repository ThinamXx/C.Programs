// Program for calculating the Area and Circumference of circle:

#include <math.h>
#include <stdio.h>
#define PI 3.14

void main()
{
    float area;
    float circumference;
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    area =PI*r*r;
    printf("The area of circle is %f",area);
    circumference =2*PI*r;
    printf("The circumference of circle is %f",circumference);
}
