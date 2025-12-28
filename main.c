#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("This is my number guessing game in C.\n");
    srand(time(NULL));
    // random number generated from time. 
    int random_number = rand();
    random_number = random_number % 101;
    int guess;
    // for debbugging
    printf("Random number: %d\n", random_number);
    // 
    printf("Enter your guess between 0-100: ");
    do {
    scanf("%d", &guess);
    if (guess == random_number) {
        printf("You correctly guessed the number!");
    } else if ((guess > 100) || (guess < 0)) {
        printf("Your guess is invalid and out of range.\n");
        printf("Guess again:");
    } else if (guess > random_number) {
        printf("Your guess was higher than the number!\n");
        printf("Guess again:");
    } else if (guess < random_number) {
        printf("Your guess was lower than the number!\n");
        printf("Guess again:");
    } 

    } while (guess != random_number);


    return 0;
}
