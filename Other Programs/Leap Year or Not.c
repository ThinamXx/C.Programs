// Program for checking whether the given year is a Leap year or not:

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d", &a);
    if (a%4 == 0)
        printf("It is a leap year.");
    else
        printf("It is not a leap year.");
    return 0;
}
