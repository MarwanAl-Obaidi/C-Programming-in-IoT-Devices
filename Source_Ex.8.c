#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)


void convert_to_capitals(char* string)
{
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((string[i] >= 'a' && string[i] <= 'z'))
				string[i] = string[i] - 32;
			continue;
		}
		if (string[i] == ' ')
		{
			++i;
			if (string[i] >= 'a' && string[i] <= 'z')
			{
				string[i] = string[i] - 32;
				continue;
			}
		}
		else
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
				string[i] = string[i] + 32;
		}
	}

	printf("%s\n\n", string);
}

void convert_to_capitals(char* string);
int main(void)
{
	printf("This program onverts the first letter of every word in a string to uppercase\n");
	printf("and up to 150 characters long. ");
	printf("You can end the program by typing stop or STOP\n");
	printf("without any other text.\n\n");

	char typed_text[150];
	while (1)
	{
		printf("Please enter your text:\n");
		fgets(typed_text, 150, stdin);

		if (typed_text[strlen(typed_text) - 1] == '\n')
		{
			printf("\nWith capitalized first letters:\n");
			typed_text[strlen(typed_text) - 1] = '\0';
		}

		if (strcmp(typed_text, "stop") == 0 || strcmp(typed_text, "STOP") == 0)
		{
			printf("\nYou ended the program\n");
			break;
		}

		convert_to_capitals(typed_text);
	}

	return 0;

}