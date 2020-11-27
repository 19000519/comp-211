#include<stdio.h>
#include<string.h>
//purpose - to check if given string is a palidrome or not
int main()
{   
    char string[100], revstring[100];
    int palindrome;

    printf("enter a string: ");
    gets(string);

    strcpy(revstring, string);
    strrev(revstring);

    if(palindrome == 0)
    {
        printf("%s is a palindrome string ", string);
    }
    else
    {
        printf("%s is not a palindrome string", string);
    }
    return 0;
}