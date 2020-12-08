#include<stdio.h>
#include<stdbool.h>
// Author - Phenyo Koswane
// purpose - getting prime numbers in a range

bool isPrimeNumber(int input);
int main ()
{
    int lowerbound , i, upperbound;

    printf("enter the lowerbound : ");
    scanf("%d", &lowerbound);

    printf("enter the upperbound : ");
    scanf("%d", &upperbound);

    for( i = lowerbound; i <= upperbound; i++)
    {
        if(isPrimeNumber(i))
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}

bool isPrimeNumber(int input)
{
    int i;

    for(i = 2; i < input; i++)
    {
        if(input%i == 0)
        {
            break;
        }
    }
    if (i == input)
    {
        return true;
    }
    else
    {
        return false;
    } 

}