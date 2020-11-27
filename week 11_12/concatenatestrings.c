#include<stdio.h>
#include<string.h>
//purpose - to concatenate two strings 
int main()
{   
    char FirstName[100], LastName[100], FullName[100];

    printf("enter your first name: ");
    gets(FirstName);

    printf("enter your second name: ");
    gets(LastName);

    strcpy(FullName, FirstName);
    strcat(FullName, " "); // adding a space to the first name cancatenation
    strcat(FullName, LastName);

    printf(" hello %s\n", FullName);
    return 0;
}