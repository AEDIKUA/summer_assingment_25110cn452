#include <stdio.h>

struct Item {
    int id, qty;
    char name[20];
    float price;
};

int main() {
    struct Item i;

    printf("Enter Item ID, Name, Quantity, Price: ");
    scanf("%d %s %d %f", &i.id, i.name, &i.qty, &i.price);

    printf("\nInventory Details\n");
    printf("Item ID  : %d\n", i.id);
    printf("Name     : %s\n", i.name);
    printf("Quantity : %d\n", i.qty);
    printf("Price    : %.2f\n", i.price);

    return 0;
}
