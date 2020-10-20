//program to check for a leap year
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //variable defination
    int year;

    //user input for leap year
    printf("Enter a year : ");
    scanf("%d", &year);

    //logic
    //if divisible by 4 and 100 and 400
    if( year%400 == 0 || (year%100 != 0 && year%4 == 0))
    {
        printf("%d is a leap year", year);
    }
    else 
    printf("%d is not a leap year", year);

    return 0;
     
}