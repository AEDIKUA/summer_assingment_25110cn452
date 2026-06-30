#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            j++;
        } else {
            if (j > max) {
                max = j;
                int k;
                for (k = 0; k < j; k++)
                    longest[k] = str[start + k];
                longest[j] = '\0';
            }
            j = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}
