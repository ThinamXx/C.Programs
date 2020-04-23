//Comparison
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers: \n");
    scanf("%d%d%d",&a, &b, &c);
    if(a>b && a>c)
        printf("The greatest number is %d", a);
    else if(b>a && b>c)
        printf("The greatest number is %d", b);
    else if(c>a && c>b)
        printf("The greatest number is %d", c);
    else
        printf("Invalid input number");


    return 0;
}
