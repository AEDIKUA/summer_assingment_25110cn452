#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float per;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if (per >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}
