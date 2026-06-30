#include <stdio.h>

int main() {
    int accNo;
    char name[20];
    float balance, deposit, withdraw;

    printf("Enter Account No, Name and Balance: ");
    scanf("%d %s %f", &accNo, name, &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if (withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\nAccount No : %d\n", accNo);
    printf("Name       : %s\n", name);
    printf("Balance    : %.2f\n", balance);

    return 0;
}
