#include<stdio.h>
#include<conio.h>

//author : ppk
// purpose : To read a number and print its factorial
int factorial(int input);
void main()
 {
     //variable defination
     int fn, sn;
    
     
      //read data from user
     printf("Enter first number:");
     scanf("%d", &fn);

     printf("Enter second number:");
     scanf("%d", &sn);
 
     //print the result
     printf("Factorial of %d is %d \n", fn, factorial(fn));
     printf("Factorial of %d is %d \n", sn, factorial(sn));
     
     
     getch();
    
 }

 int factorial(int input)
 {
     //logic
     int fact = 1, i;
     for (i = 1; i <= input; i++)
        fact = fact*i;
    
    return fact;
 }