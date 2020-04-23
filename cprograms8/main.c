#include <stdio.h>
#include <math.h>
int main()
{
    int n, reverse=0;
    printf("Enter the number to be reversed \n");
    scanf("%d", &n);

    while(n!=0)
    {
        reverse =reverse*10;
        reverse =reverse+n%10;
        n =n/10;
    }

    printf("Reverse of the entered number =%d \n", reverse);


    return 0;
}
