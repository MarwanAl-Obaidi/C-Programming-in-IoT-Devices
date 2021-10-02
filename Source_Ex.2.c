#include <stdio.h>
#pragma warning (disable:4996)

int main() {
    float money[12];
    float july;
    float all_year;
    float the_rest;
    int i;
    char total;


    printf("Enter the yearly gross salary: ");
    scanf("%f", &all_year);

    the_rest = all_year / 12.5;                                      //calculation for 11 months
    july = the_rest * 1.5;                                          //calculation for july
    money[6] = july;

    for (i = 0; i < 6; ++i) {                                       //if month is jan-jun
        money[i] = the_rest;                                        

    }
    for (i = 7; i < 12; ++i) {                                      //if month is aug-dec
        money[i] = the_rest;
    }

    for (i = 0; i < 12; ++i) {
        printf("element [%.2d]  =  %12.4f\n", i, money[i]);         //aligns the elements and numbers and prints them
    }
    printf("total         =  %12.4f\n", all_year);                   //aligns the elements and numbers

    printf("\nCalculation done, type any letter to quit.\n");       //same here
    scanf("%c", &total);

    return 0;
}