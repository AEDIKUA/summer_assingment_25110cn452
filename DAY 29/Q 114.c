#include <stdio.h>

int main() {
    int a[10], n, i, sum = 0, ch;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1.Sum\n2.Maximum\nEnter choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        for (i = 0; i < n; i++)
            sum += a[i];
        printf("Sum = %d", sum);
    } else if (ch == 2) {
        int max = a[0];
        for (i = 1; i < n; i++)
            if (a[i] > max)
                max = a[i];
        printf("Maximum = %d", max);
    } else {
        printf("Invalid Choice");
    }

    return 0;
}
