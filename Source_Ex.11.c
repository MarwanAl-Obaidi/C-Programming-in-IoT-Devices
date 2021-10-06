#include <stdio.h>
#include <stdlib.h>
#define SORT "number_list.txt"
#define LINESIZE 150
#pragma warning(disable:4996)

void sort(int* p, int size)
{
    int i, d;
    for (i = 0; i < size - 1; ++i)
    {
        for (d = 0; d < size - i - 1; ++d)
        {
            if (p[d] > p[d + 1])
            {
                int temp;
                temp = p[d];
                p[d] = p[d + 1];
                p[d + 1] = temp;
            }
        }
    }
}

int main()
{

    char line[LINESIZE];
    int a[LINESIZE];
    int i;
    FILE* number_list;

    printf("This program opens a text file that you have in your project directory.\n");
    printf("When opened it reads reads three numbers from a text file. Then the program\n");
    printf("sorts the numbers in ascending order and writes the numbers back to the file.\n");
    printf("The original text file is overwritten.\n");
    printf("The text file should be named number_list. If the file has been already placed\n\n");

    system("pause");

    number_list = fopen(SORT, "r");

    if (number_list == NULL)
    {
        printf("%s does not exist\n", SORT);
        return 0;
    }
    for (i = 0; i < 3; i++)
    {
        fscanf_s(number_list, "%d\n", &a[i]);
    }

    sort(a, 3);

    number_list = fopen(SORT, "w");

    for (i = 0; i < 3; i++)
    {
        fprintf(number_list, "%d\n", a[i]);
    }
    fclose(number_list);

    printf("\nThe numbers in the file have been sorted.\n");
    return 0;

}
