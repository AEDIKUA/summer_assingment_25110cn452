#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("1.Length\n2.Reverse\nEnter choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        printf("Length = %d", strlen(str));
    } else if (ch == 2) {
        strrev(str);
        printf("Reverse = %s", str);
    } else {
        printf("Invalid Choice");
    }

    return 0;
}
