#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int random, guess;
	int no_of_guess = 0;
	srand(time(NULL));

	printf("Welcome to the number guessing game!!\n\n");
	random = (rand() % 100) + 1;  // Generates a number between 1 and 100

	do {
		printf("Enter a number between 1 and 100: ");

		scanf("%d", &guess);
		no_of_guess++;

		if (guess < random) {
			printf("The number you guessed is small \n\n");

		} else if (guess > random) {
			printf("The number you guessed is big  \n\n");

		} else {
			printf(
					"Congratulation you got the correct number. You took %d tries  to guess the number. ",
					no_of_guess);

		}

	} while (guess != random);

	return 0;
}

