// Program for adding 2 Dimensional Arrays:

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    add(a,b);
}

void add(int a, int b)
{
    int i, j;
    int x[3][3], y[3][3], c[3][3];
    printf("Enter the elements of first array:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Enter the elements of second array:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    printf("The addition of two arrays are:\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            c[i][j] = x[i][j] + y[i][j];
            printf("\t%d", c[i][j]);
        }
    }
}
