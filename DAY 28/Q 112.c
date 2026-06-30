#include <stdio.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c;

    printf("Enter Name and Phone Number: ");
    scanf("%s %s", c.name, c.phone);

    printf("\nContact Details\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);

    return 0;
}
