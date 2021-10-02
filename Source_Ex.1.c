#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	int integer, scores, sum = 0;
	float average;
	scores = 0;

	printf("The program calculates the average of scores you enter.\n");
	printf("Negative numbers wont be counted!\n");
	printf("End the program with a 0.\n");

	do {
		printf("Enter a number:");
		scanf("%d", &integer);

		if (integer < 0) {

			printf("Negative numbers wont be counted!\n");
		}
		else if (integer > 0) {

			scores++;
			sum = sum + integer;
		}
		else if (integer == 0) {

			break;
		}

	} while (1);
	average = (float)sum / (float)scores;

	printf("You entered %d numbers.\n", scores);
	printf("The average is: %.2f\n", average);

	return 0;
}