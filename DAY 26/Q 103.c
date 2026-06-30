#include <stdio.h>

int main() {
    int ch;
    float bal = 5000, amt;

    scanf("%d", &ch);

    if (ch == 1)
        printf("Balance = %.2f", bal);
    else if (ch == 2) {
        scanf("%f", &amt);
        printf("Balance = %.2f", bal + amt);
    } else if (ch == 3) {
        scanf("%f", &amt);
        if (amt <= bal)
            printf("Balance = %.2f", bal - amt);
        else
            printf("Insufficient Balance");
    } else
        printf("Invalid Choice");

    return 0;
}
