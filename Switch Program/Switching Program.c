// Example of Implementation of Switching in Program:

#include <stdio.h>

void main()
{
    int choice;
    printf("Which of the websites you visit the most? \n");
    printf("Enter:\n1 for FACEBOOK,\n2 for YAHOO,\n3 for TWITTER\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:printf("You use the FACEBOOK.");
        break;
        case 2:printf("You use the YAHOO.");
        break;
        case 3:printf("You use the TWITTER");
        break;
        default:
            printf("Invalid input.");
    }
}
