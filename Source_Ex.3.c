#include <stdio.h>
#pragma warning (disable:4996)

#define	MAX_SIZE	50000

float average(int* grades, int len);


int main()
{
	int len = 0;
	int grades[MAX_SIZE];
	while (len == 0) {
		printf("Number of students:");
		scanf("%d", &len);
		if (len < 0 || len > MAX_SIZE) {
			printf("Please input a positive number no greater than 50000!\n");
			len = 0;
		}

	}


	for (int i = 0; i < len; ++i) {
		grades[i] = 0;
	}


	for (int i = 0; i < len; ++i) {
		printf("What is the grade of student %d ? ", i + 45000);
		scanf("%d", &grades[i]);

		if (grades[i] > 5 || grades[i] < 0) {
			printf("Please input a number between 0 and 5!\n");
			i--;
			continue;
		}

	}


	printf("The average grade is %.2f", average(grades, len));


	return 0;
}

float average(int* grades, int len)
{
	int sum = 0;
	for (int i = 0; i < len; ++i) {
		sum += grades[i];
	}

	return (float)sum / len;
}