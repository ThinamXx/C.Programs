#include <stdio.h>
int main()
{
    int n,digit,temp,sum=0;
    printf("Enter the numbers to be checked: ");
    scanf("%d", n);
    temp = n;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(temp==sum)
        printf("It is Armstrong number.\n");
    else
        printf("It is not Armstrong number.\n");
return 0;
}
