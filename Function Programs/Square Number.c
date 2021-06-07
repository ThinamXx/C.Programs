// Program for finding the square of a number using Function:

#include <stdio.h>

int main()
{
    int n, a;
    printf("Enter the number:");
    scanf("%d", &n);
    a = square(n);
    printf("Answer is %d", a);
}

int square(int y)
{
    int sq;
    sq = y * y;
    return sq;
}
