// Program for printing an Array:

#include <stdio.h>
#include <conio.h>

int main()
{
    int n=5;
    int value[n];
    int i;
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &value[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", value[i]);
    }
    return 0;
}
