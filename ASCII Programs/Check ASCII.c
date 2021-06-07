// Program for printing the ASCII letters:

#include <stdio.h>

void main()
{
    char i;
    printf("Enter the characters: ");
    scanf("%c", &i);
    if(i>='A' && i<='Z')
        printf("%c is Uppercase.", i);
    else if(i>='a' && i<='z')
        printf("%c is Lowercase.", i);
    else
        printf("Its not ASCII");
    return 0;
}
