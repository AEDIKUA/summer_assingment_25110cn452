#include <stdio.h>

int main() {
    char book[3][20];
    int i;

    printf("Enter 3 book names:\n");
    for (i = 0; i < 3; i++)
        scanf("%s", book[i]);

    printf("\nBooks in Library:\n");
    for (i = 0; i < 3; i++)
        printf("%s\n", book[i]);

    return 0;
}
