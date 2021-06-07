// Program for making a triangle shape using asterisk:

#include <stdio.h>

int main()
{
    int i, j;
    int a=3;
    for(i=1; i<=3; i++)
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
