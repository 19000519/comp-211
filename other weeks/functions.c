#include<stdio.h>

void sayhi(char input[10]);

int main()
{
    char name[10];

    printf("enter your name : ");
    scanf("%s", &name);

    sayhi(name);
    return 0;
}

void sayhi(char input[10])
{
    printf("hello %s", input);
}