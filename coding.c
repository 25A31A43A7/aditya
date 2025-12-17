#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    int coin_toss_result;
    srand(time(NULL));

    printf("Welcome to Heads or Tails!\n");
    printf("Enter 1 for Heads, or 2 for Tails: ");
    scanf("%d", &guess);
    coin_toss_result = rand() % 2; 
    int converted_result = (coin_toss_result == 0) ? 2 : 1;
    printf("The coin landed on: %s\n", (converted_result == 1) ? "Heads" : "Tails");

    if (guess == converted_result) {
        printf("Congratulations! You guessed correctly!\n");
    } else {
        printf("Sorry, you guessed incorrectly. Better luck next time!\n");
    }

    return 0;
}