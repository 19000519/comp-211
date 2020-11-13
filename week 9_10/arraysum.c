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

 int numbers2[row][column];
//get input of the array and storing it

for(i = 0; i < row; i++)
{
    for(j = 0; j < column; j++)
    {
        printf("enter the value for numbers2[%d][%d] : ",i, j);
        scanf("%d",  &numbers2[i][j]);
    }
}

int sum[100][100];
for(i = 0; i < row; i++)
{
    for(j = 0; j < column; j++)
    {
       sum[i][j] = numbers[i][j] + numbers2[i][j];
    }
}

//print the array
printf(" your 2d array elements are: \n");
for(i = 0; i < row; i++)
{
    for(j = 0; j < column; j++)
    {
       printf(" %d ", sum[i][j]);    
       if(j == row)
       {
           printf("\n");
       }
    }
}

}