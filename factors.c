#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//author : ppk
// purpose : To read a number from user input and print factors of the number
int logic(int fact);
int main()
{
    //variable declaration
    int factor;

    //read user input
    printf("enter any number:");
    scanf("%d", &factor);
    
    printf("%d, ", logic(factor));

}

int logic(int fact)
{
    int i;
    for(i = 1; i <= fact; i++)
    {   
        if(fact%i == 0)
         printf("%d, ", i);
        
    }
}
