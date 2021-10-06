#include <stdio.h>
#include <stdlib.h>
#define NUMBERS_LIST "number_list.txt"
#define LINE_SIZE 150
#pragma warning(disable : 4996)


int main()
{
    int counter = 0;
    int value = 0;
    int number = 0;
    double sum = 0;
    char line[LINE_SIZE];
    FILE* number_list;
    number_list = fopen(NUMBERS_LIST, "r");


    printf("This program opens a text file that you have in your project directory.\n");
    printf("When opened it reads numbers from a text file and print the average of the number read. The 
    first row of the file contains count of numbers to read from the file (excluding the first row).\n");
    printf("The text file should be named number_list. If the file has been already placed\n\n");

    system("pause");

    if (number_list == NULL)
    {
        printf("\nFile not found. Make sure the text file is named number_list.\n");
        printf("No numbers found or calculations have been made!\n");
        return;
    }
    else
    {
        fgets(line, LINE_SIZE, number_list);
        sscanf(line, "%d", &number);
        while (!feof(number_list))
        {
            if (fgets(line, LINE_SIZE, number_list) != NULL)
            {
                if (sscanf(line, "%d", &value) == 1)
                {
                    sum = sum + value;
                    counter++;
                }
            }
        }
        fclose(number_list);
    }


    if (counter == number)
    {
        printf("\nAverage of %d numbers is: %.2f\n", counter, (double)sum / counter);
    }
    else
    {
        printf("\nError! Tried to read %d numbers, %d numbers were read.\n", number, counter);
        printf("Average of %d numbers is: %.2f\n", counter, (double)sum / counter);
    }

    return 0;
}