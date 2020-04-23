//Swapping of two numbers without third variable
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    printf("Enter two numbers a and b \n");
    scanf("%d %d", &a, &b);
    a =a+b;
    b =a-b;
    a =a-b;
    printf("The swapping numbers are a=%d and b=%d", a, b);
    return 0;

}
