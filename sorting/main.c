// Program for sorting an array of numbers:

#include <stdio.h>

int main()
{
    int a[5] = {56, 4, 69, 76, 2};
    int i, j;
    int temp;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}
