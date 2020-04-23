#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    result = add(num1, num2);
    printf("Subtraction of two numbers is %d", result);
    return  0;
}
int add(int a, int b)
{
    int sub;
    sub = a - b;
    return sub;
}
