// Example Program of Implementation of Pointers:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4] = {10, 20, 30, 40};
    int *ptr;
    int i;
    ptr = &a[3];
    int sum = 0;
    for(i=0; i<4; i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);
}
