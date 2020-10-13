#include<stdio.h>
#include<conio.h>

//Author : Ppk
//Purpose : To get the sum of n Natural numbers

void main()
{
    //declare variables
    int i, input, sum =0;

    //get user input
    printf("Enter a natural number : ");
    scanf("%d", &input);

    //logic
    for(i = 1; i <= input; i++)
    sum = sum + i;

    //print the ouput
    printf("The sum is %d \n", sum);

    getch();
}
