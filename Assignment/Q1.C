//Author : Phenyo Phemelo Koswane
// Purpose : To calculate the text according to house value
#include<stdio.h>

int main()
{
    float price, tax;
    printf("Enter the house value: ");
    scanf("%f", &price);

    if(price > 250000)
    {
        if(price <= 500000)
        {
            tax = price * 0.025;
        }
        else
        {
            if(price <= 750000)
            {
                tax = price * 0.05; 
            }
            else
            {
                if(price <= 1000000)
                    {
                        tax = price * 0.075; 
                    }
                else
                    {
                        tax = price * 0.1;
                    }
            }  
        }
    }
    else 
    {
        tax = 0;
    }

    printf("The tax of the house whose value is P%.2f is = P%.2f", price, tax);
    return 0;
}