#include<stdio.h>
#include<conio.h>

//author: ppk
//purpose : to read a number and print multiplication table
int main()
{
    //variable declaration
    int input, i;

    //read data from the user 
    printf("Print any number : ");
    scanf("%d", &input); 

    //logic
    for(i = 1; i<=10; i++)

        printf("%d*%d=%d \n", input, i, input*i);
        getch();

}