#include <stdio.h>
#include <string.h>

struct Book {

    char title[30];

    char author[30];

    int publicationYear;

    char ISBN[14];

    float price;
};

int main() {
    struct Book book1;

    // Initialize book1 with given data
    strcpy(book1.title, "Introduction to C Programming");

    strcpy(book1.author, "John Smith");

    book1.publicationYear = 2022;

    strcpy(book1.ISBN, "9780131103627");

    book1.price = 49.99;

    // Print book1 details
    printf("Title: %s\n", book1.title);

    printf("Author: %s\n", book1.author);

    printf("Publication Year: %d\n", book1.publicationYear);

    printf("ISBN: %s\n", book1.ISBN);

    printf("Price: %.2f\n", book1.price);

    // Prompt user to enter book details
    printf("\nEnter book details:\n");

    printf("Title: ");

    scanf("%s", book1.title);

    printf("Author: ");

    scanf("%s", book1.author);

    printf("Publication Year: ");

    scanf("%d", &book1.publicationYear);

    printf("ISBN: ");

    scanf("%s", book1.ISBN);

    printf("Price: ");

    scanf("%f", &book1.price);

    // Print the entered book details
    printf("\nBook Details:\n");

    printf("Title: %s\n", book1.title);

    printf("Author: %s\n", book1.author);

    printf("Publication Year: %d\n", book1.publicationYear);

    printf("ISBN: %s\n", book1.ISBN);

    printf("Price: %.2f\n", book1.price);

    return 0;
}