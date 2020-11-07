#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//author : ppk
// purpose : To read a number from user input and print factors of the number
int logic(int input);
int main()
{
    //variable declaration
    int x;

    //read user input
    printf("enter any number:");
    scanf("%d", &x);
    
    printf("%d, ", logic(x));

}

int logic(int input)
{
    int i;
    for(i = 1; i <= input; i++)
    {   
        if(input%i == 0)
         printf("%d, ", i);
        
    }
}
