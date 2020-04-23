//shifting of data by 3bits
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the integer: ");
    scanf("%d", &a);
    a>>=3;
    b=a;
    printf("The right shifted data is=%d ", b);

    return 0;
}
