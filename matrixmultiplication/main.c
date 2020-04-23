#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, m, n, i, j, k;
    int a[10][10], b[10][10], c[10][10];
    int sum=0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &x, &y);
    printf("Enter the first matrix:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &m, &n);
    if(y!=m)
    {
        printf("Matrices of entered order cannot be multiplied.");
    }
    else
    {
        printf("Enter the second matrix:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0; i<x; i++)
        {
            for(j=0; j<n; j++)
            {
                for(k=0; k<m; k++)
                {
                    sum=sum+ a[i][k]*b[k][j];
                }
                c[i][j]= sum;
                sum=0;
            }
        }
        printf("Multiplication of two matrices is:\n");
        for(i=0; i<x; i++)
        {
            printf("\n");
            for(j=0; j<n; j++)
            {
                printf("\t%d", c[i][j]);
            }
        }
    }
    return 0;
}
