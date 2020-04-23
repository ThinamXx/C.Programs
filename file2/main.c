 #include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    char a[20];
    FILE *gg;
    gg = fopen("histo.txt", "r+");
    printf("Enter:");
    fgets(a, 20, gg);
    printf("Contents:%s\n", a);
    fseek(gg, 5, 0);
    fputs("Thinam", gg);
    rewind(gg);
    fgets(a, 20, gg);
    printf("%s", a);
    n = ftell(gg);
    printf("Rewind is %d", n);
    //if(feof(gg) != 0)
    //{
        //printf("Error");
    //}
    //if(ferror(gg) == 0)
    //{
        //printf("No error");
    //}
    fclose(gg);
}
