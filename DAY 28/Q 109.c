#include <stdio.h>

struct Book {
    int id;
    char name[30];
    char author[30];
};

int main() {
    struct Book b;

    printf("Enter Book ID, Book Name, Author: ");
    scanf("%d %s %s", &b.id, b.name, b.author);

    printf("\nBook Details\n");
    printf("Book ID : %d\n", b.id);
    printf("Book Name : %s\n", b.name);
    printf("Author : %s\n", b.author);

    return 0;
}
