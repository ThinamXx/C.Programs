// Program for performing the Arithmetic Calculations: 

#include <stdio.h>
#include <string.h>

void main()
{
    int *p1, *p2;//Pointer Variables
    int num1,  num2;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &num1, &num2);
    p1 = &num1;
    p2 = &num2;
    printf("\n %d + %d = %d", *p1, *p2, *p1 + *p2); // Addition.
    printf("\n %d - %d = %d", *p1, *p2, *p1 - *p2); // Subtraction.
    printf("\n %d * %d = %d", *p1, *p2, *p1 * *p2); // Multiplication.
    printf("\n %d / %d = %d", *p1, *p2, *p1 / *p2); // Division.
}
