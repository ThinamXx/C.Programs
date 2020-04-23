//10numbers
#include <stdio.h>
void main()
{
   int i = 1;
   int sum = 0;
   while(i<=10)
   {
       printf("%d\n", i);
       i++;
   }
   for(i=1;i<=10;i++)
    sum =sum+i;
   printf("\nThe sum of first natural numbers is %d", sum);
}
