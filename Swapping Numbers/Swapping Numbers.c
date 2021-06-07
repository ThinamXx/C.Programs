// Program for Swapping two numbers:

#include <stdio.h>
#include <math.h>

void main()
{
    int a;
    int b;
    int c;
    printf("Enter two numbers a and b \n");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("The swapping numbers are a=%d and b=%d", a, b);
}
