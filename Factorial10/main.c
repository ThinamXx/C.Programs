#include <stdio.h>
#include <string.h>
void main()
{
    int i, count = 0;
    int num;
    printf("Enter the value of number:");
    scanf("%d", &num);
    for(i=0; i<=num; i++)
    {
        printf("%d! = %d\n", i, Fact(i));
        count = count + 1;
    }
    printf("%d", count);

    return 0;
}
int Fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return(n*Fact(n-1));
    }
}
