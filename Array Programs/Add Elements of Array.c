// Sum of elements inside an Array:

#include <stdio.h>

int main()
{
    int i;
    int a[5];
    printf("Enter the elements of array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    print(a,5);
}

void print(int b[5])
{
    int sum = 0;
    int i;
    for(i=0; i<5; i++)
    {
        sum = sum + b[i];
    }
    printf("The sum of array is %d", sum);
}
