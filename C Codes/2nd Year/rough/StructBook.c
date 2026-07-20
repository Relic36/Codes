#include <stdio.h>
#include <string.h>

struct book{
    char bookID[50];
    char bookName[50];
    int price;
};

int main(){
    struct book b1;
    printf("Enter about book1:\n");
    printf("Enter book ID: ");
    scanf("%s", b1.bookID);
    printf("Enter book name: ");
    scanf("%s", b1.bookName);
    printf("Enter book price: ");
    scanf("%d", &b1.price);
    printf("Details of the book1:\n");
    printf("Book ID: %s\n", b1.bookID);
    printf("Book Name: %s\n", b1.bookName);
    printf("Book Price: %d\n", b1.price);

    struct book b2;
    printf("Enter about book2:\n");
    printf("Enter book ID: ");
    scanf("%s", b2.bookID);
    printf("Enter book name: ");
    scanf("%s", b2.bookName);
    printf("Enter book price: ");
    scanf("%d", &b2.price);
    printf("Details of the book2:\n");
    printf("Book ID: %s\n", b2.bookID);
    printf("Book Name: %s\n", b2.bookName);
    printf("Book Price: %d\n", b2.price);

    struct book b3;
    printf("Enter about book3:\n");
    printf("Enter book ID: ");
    scanf("%s", b3.bookID);
    printf("Enter book name: ");
    scanf("%s", b3.bookName);
    printf("Enter book price: ");
    scanf("%d", &b3.price);
    printf("Details of the book3:\n");
    printf("Book ID: %s\n", b3.bookID);
    printf("Book Name: %s\n", b3.bookName);
    printf("Book Price: %d\n", b3.price);
}