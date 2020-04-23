#include <stdio.h>
int main()
{
   int n, i, c=0;
   printf("Enter the number to be checked: ");
   scanf("%d", &n);
   for(i=2; i<n; i++)
   {
       if(n%i == 0)
       {
           c++;
       }
   }
    if(c == 0)
    {
        printf("The number is Prime",n);
    }
    else
    {
        printf("The number is not Prime",n);
    }

   return 0;
}
