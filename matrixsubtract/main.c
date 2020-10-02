// Program for subtracting two matrices:

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2], i,j;
    printf("Enter the first matrix:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Subtraction of two matrices:\n");
    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("\t%d", c[i][j]);
        }
    }
    return 0;
}
