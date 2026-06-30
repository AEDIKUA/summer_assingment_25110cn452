#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;

    srand(time(0));
    num = rand() % 100 + 1;   // Random number between 1 and 100

    do {
        printf("Guess a number (1-100): ");
        scanf("%d", &guess);

        if (guess > num)
            printf("Too High!\n");
        else if (guess < num)
            printf("Too Low!\n");
        else
            printf("Correct! You guessed the number.\n");

    } while (guess != num);

    return 0;
}
