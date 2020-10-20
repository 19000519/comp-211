#include<stdio.h>
#include<stdlib.h>

int compare (int a, int b, int c);

int main()
{
    //variable defination
    int x,y,z;

    //get user input for a number
    printf("enter 3 numbers : \n");
    scanf("%d%d%d", &x, &y, &z);

    //logic
    if(x > y && x > z)
    printf("%d is greater", x);

    else if ( y > x && y > z)
    printf("%d is greater", y);

    else
    printf("%d is greater", z);

    return 0;
}
