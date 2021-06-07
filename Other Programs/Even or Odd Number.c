// Program for checking whether a given number is odd or even:

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number:\n");
    scanf("%d", &number);
    number%2 == 0 ? printf("The number %d is Even",number): printf("The number %d is Odd",number);
    return 0;
}
