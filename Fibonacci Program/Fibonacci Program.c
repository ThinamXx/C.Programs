// Program for printing the Fibonacci numbers series:

#include <stdio.h>
#include <string.h>

 void main()
 {
     int n, c = 0;
     int i;
     printf("Enter the n terms of Fibonacci numbers:");
     scanf("%d", &n);
     printf("\nThe Fibonacci series is:");
     for(i=0; i<=n; i++)
     {
         printf("%d\t", Fib(c));
         c++;
     }
 }

 int Fib(int a)
 {
     int f;
     if(a == 0)
     {
        return 0;
     }
     else if(a == 1)
     {
         return 1;
     }
     else
     {
         f = Fib(a-1) + Fib(a-2);
         return f;
     }
 }
