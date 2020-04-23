#include <stdio.h>
//Swapping of two numbers using third variable
int swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &x, &y);
    printf("Before Swapping:");
    printf("\nThe value of x=%d and y=%d", x, y);
    swap(&x, &y);
    printf("\n**************");
    printf("\nAfter Swapping:\n");
    printf("The value of x is %d and y is %d", x, y);
}
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return c;
}
