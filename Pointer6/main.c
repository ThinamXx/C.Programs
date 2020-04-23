#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void add(int a, int b)
{
    printf("Value of a =%d and b =%d", a, b);
    printf("\nSum of two numbers is %d", a+b);
}
int main()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    void (*ptr) (int,int);
    ptr = &add;
    ptr(a,b);
}
