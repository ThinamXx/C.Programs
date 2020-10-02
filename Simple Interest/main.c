// Simple Program for calculating the Simple Interest:

#include <stdio.h>
#include <math.h>

void main()
{
    float P,T,R;
    float I;
    printf("Enter the principal:\n");
    scanf("%f", &P);
    printf("Enter the time:\n");
    scanf("%f", &T);
    printf("Enter the rate:\n");
    scanf("%f",&R);
    I =(P*T*R)/100;
    printf("The Simple Interest is %f",I);
}
