// Example of Pointer Program:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   void *p;
   float a= 25;
   float b= 5;
   float c;
   c = a/b;
   p = &c;
   printf("%f", *(float*)p);

}
