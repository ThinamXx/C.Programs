// Example Program of Multiplication:

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=12; i++)
    {
        for(j=1; j<=10; ++j)
        {
           printf("%d * %d = %d\n", i, j, i*j);
        }

        printf("\n");
    }
    return 0;
}
