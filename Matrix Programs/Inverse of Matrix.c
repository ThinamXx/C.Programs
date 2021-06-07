// Program for printing the Inverse of a Matrix:

#include <stdio.h>
#include <conio.h>

int main()
{
   int i, j, x, y;
   int a[10][10];
   printf("Enter the number of rows and columns:\n");
   scanf("%d%d",&x,&y);
   printf("Enter the matrix:\n");
   for(i=0; i<x; i++)
   {
       for(j=0; j<y; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }
   printf("The inverse matrix is:\n");
   for(i=0; i<x; i++)
   {
       printf("\n");
       for(j=0; j<y; j++)
       {
           printf("\t%d", a[j][i]);
       }
   }
   return 0;

}
