#include<stdio.h>

int main()
{
    int i,c, n;

    printf("enter total numbers to be used: ");
    scanf("%d", &n);

    int numbers[n];

    printf("enter an array of %d numbers \n", n);
    for(i= 1; i<n; i++)
    {
        scanf("%d ", &numbers[i]);
    }

    for(c = 1 ; c <= n; c++)
    {   
        printf("%d ", c);
    }

    return 0;
}   
