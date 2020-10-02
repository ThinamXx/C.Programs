// Example Program for Implementation of Recursion:

#include <stdio.h>
#include <string.h>

recursion(int count)
{
    if(count < 10)
    {
        recursion(count + 1);
    }
}

void main()
{
    int a = 0;
    recursion(0);
}
