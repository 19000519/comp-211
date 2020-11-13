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
/*to call a function you have to
  1- declare the function
  2- define it outside main
  3- call the function in main for output */
  
 int factorial(int input)
 {
     //logic
     int fact = 1, i;
        if(input ==0)
        return 1;
     else
        return input*factorial(input-1);
 }