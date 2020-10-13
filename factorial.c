#include<stdio.h>
#include<conio.h>

//author : ppk
// purpose : To read a number and print its factorial

 void main()
 {
     //variable defination
     int input, i, fact = 1;

     //read data from user
     printf("Enter any number:");
     scanf("%d", &input);

     //logic
     for (i = 1; i <= input; i++)
        fact = fact*i;

     //print the result
     printf("Factorial of %d is %d", input, fact);
     
     getch();
    
 }