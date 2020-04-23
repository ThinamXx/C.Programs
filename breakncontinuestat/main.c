#include <stdio.h>
void main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i == 4)
        {
            continue;
        }
        if(i == 9)
        {
            break;
        }
        printf("\t %d",i);
    }
}
