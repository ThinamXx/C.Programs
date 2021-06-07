// Printing the sum of elements in Array using Pointer:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int *ptr;
    int n;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the number of elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr = &a[0];
    for(i=0; i<n; i++)
    {
        printf("%p\n", ptr);
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nThe sum of array is %d", sum);
}
