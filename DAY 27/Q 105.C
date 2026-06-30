#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    printf("\nStudent Record\n");
    printf("Roll : %d\n", s.roll);
    printf("Name : %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
