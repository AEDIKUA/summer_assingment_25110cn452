#include <stdio.h>

int main() {
    float basic, hra, da, salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    salary = basic + hra + da;

    printf("Gross Salary = %.2f\n", salary);

    return 0;
}
