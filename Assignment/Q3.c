#include <stdio.h>
//author - Phenyo Phemelo Koswane
//purpose - Creating a list of book details
struct book {
    char title[100];
    char author[100];
    char publisher[100];
    char publishing_year[5];
    char number_of_pages[10];
    int roll;
    float price;
} 
b[100];

int main()
{
    int limit, i;
    printf("Enter information a book:\n");

    printf("Enter how many books do you want to add? \n");
    scanf("%s", &limit);

    // storing information
    for(i = 0; i < limit; ++i) 
    {
        b[i].roll = i + 1;
        printf("\nFor roll number %d,\n", b[i].roll);
        printf("Enter book title: ");
        scanf("%s", &b[i].title);
        printf("Enter book author: ");
        scanf("%s", &b[i].author);
        printf("Enter book publisher: ");
        scanf("%s", &b[i].publisher);
        printf("Enter book publishing year: ");
        scanf("%s", &b[i].publishing_year);
        printf("Enter book price: ");
        scanf("%s", &b[i].price);

    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 10; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(b[i].title);
        printf("Marks: %.1f", b[i].price);
        printf("\n");
    }
    return 0;
}