// Program for Implementing the Malloc and Calloc Pointer:

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;
    int *ptr, *ptr1;
    int n;
    printf("Enter the size:");
    scanf("%d", &n);
    // Calloc Pointer:
     ptr = (int*)calloc(n,sizeof(int));
    //ptr = (int*)malloc(n*sizeof(int)); // Malloc Pointer.
    if(ptr == NULL)
    {
        printf("Error");
        exit(0);
    }
    ptr1 = ptr;
    printf("Enter the numbers:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    printf("\nContents of this block:");
    for(i=1; i<=n; i++)
    {
        printf("%d\t", *ptr1);
        sum = sum + *ptr1;
        ptr1++;
    }
    printf("\nSum of the contents is %d", sum);
}
