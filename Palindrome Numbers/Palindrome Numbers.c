// Program to check whether a given number is Palindrome number or not:

#include <stdio.h>

int main()
{
    int n, reverse=0,a;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    a=n;
    while(n!=0)
    {
        reverse = reverse*10;
        reverse = reverse+n%10;
        n = n/10;
    }
    printf("The reversed number is %d", reverse);
    if(a==reverse)
        printf("\n%d is a palindrome number.", a);
    else
        printf("\n%d is not a palindrome number.", a);

    return 0;
}
