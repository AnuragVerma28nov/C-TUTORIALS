// To input  information of books such as bookname, bookwriter, number of pages ,price and display it

#include <stdio.h>

struct Book
{
    char bookname[100];
    char bookwriter[100];
    int pages;
    float price;
};

int main()
{
    struct Book book;
    printf("Enter book name: ");
    scanf("%s", book.bookname);
    printf("Enter book writer: ");
    scanf("%s", book.bookwriter);
    printf("Enter number of pages: ");
    scanf("%d", &book.pages);
    printf("Enter price: ");
    scanf("%f", &book.price);
    printf("Book Information:\n");
    printf("Book Name: %s\n", book.bookname);
    printf("Book Writer: %s\n", book.bookwriter);
    printf("Number of Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);
    return 0;
}
