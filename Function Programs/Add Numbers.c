// Program for adding two numbers using Function:

#include <stdio.h>

int add(int a, int b)
{
    int add;
    add = a  + b;
    return add;
}

int main()
{
    int num1, num2, result;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    result = add(num1, num2);
    printf("Sum of two numbers is %d", result);
    return 0;
}
