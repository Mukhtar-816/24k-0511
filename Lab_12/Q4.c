#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[10];
    char author[10];
    int publicationYear;
};

int main()
{
    struct Book *arr;
    int n;

    printf("Enter number of book's data you want to store : ");
    scanf("%d", &n);

    arr = (struct Book *)malloc(n * sizeof(struct Book));

    for (int i = 0; i < n; ++i)
    {
        printf("\nBook %d\n", i + 1);
        printf("Enter the book title : ");
        scanf("%s", &arr[i].title);
        printf("Enter the book author : ");
        scanf("%s", &arr[i].author);
        printf("Enter the book publication year : ");
        scanf("%d", &arr[i].publicationYear);
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i].publicationYear > 2000)
        {
            printf("The Books publish after 2000s are : \n%s", arr[i].title);
        }
    }

    free(arr);
}