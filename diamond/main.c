// Program for making a Diamond shape using asterisk:

#include <stdio.h>

int main()
{
    int i, j, n, space;
    printf("Enter the number of rows you wish to see: ");
    scanf("%d", &n);
    space  = n-1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
            space--;
            {
                for(j=1; j<=2*i-1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
    }
    space = 1;
     for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
            space++;
            {
                for(j=1; j<=2*(n-i)-1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
    }
    return 0;
}
