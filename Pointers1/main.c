// Example Program of Implementation of Pointer:

#include <stdio.h>
#include <string.h>

void main()
{
    int *a;
    int b = 200;
    a = &b;
    printf("Value of b is %d using pointer variable", *a);
    printf("\n Address of b is %p using pointer variable", a);
    printf("\n Value of a is %d", a);
    printf("\n Address  of a is %d", &a);
}
