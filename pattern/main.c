#include <stdio.h>
int main()
{
    int i, j, a;
    a=5;
    for(i=1; i<=5; i++)
    {
       for(j=1; j<a; j++)
            printf(" ");
            a--;
       {
          for(j=1; j<=i; j++)
          {
              printf("*");
          }
          printf("\n");
       }
    }
    return 0;
}
