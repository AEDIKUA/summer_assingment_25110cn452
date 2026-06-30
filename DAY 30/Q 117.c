#include <stdio.h>

int main() {
    int roll[5], marks[5], i;
    char name[5][20];

    printf("Enter Roll, Name and Marks of 5 Students:\n");

    for (i = 0; i < 5; i++)
        scanf("%d %s %d", &roll[i], name[i], &marks[i]);

    printf("\nStudent Records:\n");
    for (i = 0; i < 5; i++)
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);

    return 0;
}
