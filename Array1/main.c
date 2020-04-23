#include <stdio.h>
#include <conio.h>
int main()
{
    int value[10];
    int i;
    printf("Enter the numbers:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &value[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("%d", value[i]);
    }
    return 0;
}
