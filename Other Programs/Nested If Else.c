// Program of Implementation of Nested if else Loop:

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("a is greatest", a);
    }
    else
    {
        if(b>a && b>c)
            printf("b is greatest", b);
        else
            printf("c is greatest", c);
    }
    return 0;
}
