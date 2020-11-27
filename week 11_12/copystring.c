#include<stdio.h>
#include<string.h>
//purpose - to copy a string into another string
int main()
{   char string[100];
    char copystring[100];

    printf("enter a string: ");
    gets(string);

    strcpy(copystring, string);

    printf("string : %s\n", string);
    printf("copystring : %s\n", copystring);
    return 0;

}