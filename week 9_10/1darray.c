#include<stdio.h>

int main()
{
    int i,c, n;

    printf("enter total numbers to be used: ");
    scanf("%d", &n);

    int numbers[100];

    printf("enter an array of %d numbers \n", n);
    for(i = 0 ; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

   
    for(c = 0 ; c < n; c++)
    {   
        numbers[1] = 3;
        printf(" numbers[%d] = %d \n", c, numbers[c]);
    }

    return 0;
}   
