 // Program for calculating the Compound Interest:

#include <stdio.h>
#include <math.h>

void main()
{
    float P,T,R,I;
    float CI;
    printf("Enter the principal: ");
    scanf("%f", &P);
    printf("Enter the rate: ");
    scanf("%f", &R);
    printf("Enter the time: ");
    scanf("%f", &T);
    I =(P*T*R)/100;
    printf("The Interest is %f", I);
    CI =P*(pow((1+R/100),T)-1);
    printf("The CI is %f", CI);
}
