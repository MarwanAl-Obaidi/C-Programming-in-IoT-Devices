#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void multiply(int source_vector[3], int source_matrix[3][3], int result_vector[3])
{
    int row, col, calc = 0;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            calc += source_vector[col] * source_matrix[row][col];
        }
        result_vector[row] = calc;
        calc = 0;
    }
}

int main()
{
    int source_vector[3];
    int source_matrix[3][3];
    int result_vector[3];
    int row;                            //row
    int col;                            //column
    int i = 0;
    int calc = 0;                       //calculation

    printf("This program asks user to enter initial values for vector and matrix.\n");
    printf("The Program then prints the initial values before multiplication and\nthe result after multiplication.\n\n");
    
    printf("Enter vector parameters:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &source_vector[i]);
    }

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("Enter the number for matrix row no. %d column no. %d\n", row + 1, col + 1);
            scanf("%d", &source_matrix[row][col]);
        }
    }

    printf("\nSource Vector:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n %d, \n", source_vector[i]);
    }

    printf("\nMatrix:\n");                                                      //prints the matrix
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d, ", source_matrix[row][col]);
        }
        printf("\n");
    }

    multiply(source_vector, source_matrix, result_vector);

    printf("\Result Vector:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n %d \n", result_vector[i]);
    }
    
    return 0;
}