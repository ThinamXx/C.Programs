#include <stdio.h>
#include <stdlib.h>

void main()
{
    //char name[20];
    char name[20] = "Data Analysis";
    int roll_no = 7000;
    float height = 23.77;
    //int i;
    FILE *thinam;
    thinam = fopen("moktan.txt", "w");
    //thinam = fopen("moktan.txt", "r");
    //for(i=1; i<=7; i++)
    //{
        //putw(i, thinam);
    //}
    //if(thinam == NULL)
    //{
        //printf("Error");
    //}
    //printf("Enter name:");
    //scanf("%s", name);
    //fputs(name, thinam);
    fscanf(thinam,"%s\n%d\n%f\n", name, roll_no, height);
    //fprintf(thinam, "%s\n%d\n%f\n", name, roll_no, height);
    fclose(thinam);
}
