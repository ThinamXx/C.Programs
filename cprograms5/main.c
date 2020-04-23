//Percentage
#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,d,e,f;
    float s;
    float percentage;
    printf("Enter the marks of six subjects: \n");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    s =a+b+c+d+e+f;
    printf("The sum of six subjects is %f", s);
    percentage =(s/600)*100;
    printf("The percentage is %f", percentage);

}

