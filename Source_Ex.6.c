#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#pragma warning (disable:4996)

int encrypt(char* transf, int shift)
{

	for (int i = 0; transf[i] != '\0'; i++)
	{
		if (transf[i] >= 'A' && transf[i] <= 'Z' && transf[i] != 32)
		{
			transf[i] = transf[i] + shift;

			if (transf[i] > 'Z')
			{
				transf[i] = transf[i] - 'Z' + 'A' - 1;
			}
			if (transf[i] < 'A')
			{
				transf[i] = transf[i] + 'Z' - 'A' + 1;
			}

		}

	}

}


int main(void)
{

	int shift;
	int i = 0;
	char typed_text[100];
	char transf[100];
	char temp;

	printf("This program encrypts and decrypts any written text using\n");								//explanation
	printf("the Caesar Cipher which each letter in the plaintext is\n");
	printf("replaced by a letter some fixed number of positions down the alphabet.\n\n");

	printf("First, type the amount of shift (from A-Z. for Z-A enter negative integer): ");			//start
	scanf("%d", &shift);

	scanf("%c", &temp);
	printf("\nFinally, enter the text you want to cipher: ");
	scanf("%[^\n]", typed_text);


	for (i = 0; typed_text[i] != '\0'; i++)
	{
		transf[i] = typed_text[i];
		if (isalpha(transf[i]))
		{
			transf[i] = toupper(transf[i]);
		}
	}
	printf("\n");
	encrypt(transf, shift);

	printf("Ciphered version: ");
	
	for (i = 0; i < strlen(transf); i++)
	{
		printf("%c", transf[i]);
	}
	printf("\n");

	shift = shift * (-1);
	encrypt(transf, shift);

	printf("What you originally typed: ");

	for (i = 0; i < strlen(transf); i++)
	{
		if (isalpha(transf[i]) && islower(typed_text[i]))
		{
			transf[i] = tolower(transf[i]);

		}
		printf("%c", transf[i]);
	}
	printf("\n");

	return 0;

}