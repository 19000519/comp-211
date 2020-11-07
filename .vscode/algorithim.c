//program to test algorithims for 201
#include<stdio.h>

int main(void)
{
    int n, search,c;
    int array[100];

   printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

    //above steps are used for array initialization

  printf("Enter value to find\n");
  scanf("%d", &search);


    for(int i = 0; i < n; i++)
    {
        if(array[i] == search) 
        {
            printf("found \n");
            return 0;
        }
    }
     
     printf("not found \n");
     return 1;
}5