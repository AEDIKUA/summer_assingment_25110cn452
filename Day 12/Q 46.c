#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, sum = 0, digit, count = 0;

    // Count digits
    int temp = n;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}
