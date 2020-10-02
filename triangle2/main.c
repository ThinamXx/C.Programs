// Program for making the triangle shape using asterisk:

#include <stdio.h>

int main()
{
    int i, j, a, n;
    printf("Enter the number of rows as you wish: ");
    scanf("%d", &n);
    a=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<a; j++)
            printf(" ");
            a--;
            {
                for(j=1; j<=i*2-1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
    }
    return 0;
}
