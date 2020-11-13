//creating a 2d aray and printing it out
#include<stdio.h>
int main()
{
//declare variables needed
int row, column, i, j;

//getting the size of the array
printf("enter the number of rows & colums of the 2darray:");
scanf("%d%d", &row, &column);

 int numbers[row][column];
//get input of the array and storing it

for(i = 0; i < row; i++)
{
    for(j = 0; j < column; j++)
    {
        printf("enter the value for numbers[%d][%d] : ",i, j);
        scanf("%d",  &numbers[i][j]);
    }
}

//print the array
printf(" your 2d array elements are: \n");
for(i = 0; i < row; i++)
{
    for(j = 0; j < column; j++)
    {
       printf(" %d ", numbers[i][j]);    
       if(j == row)
       {
           printf("\n");
       }
    }
}

}