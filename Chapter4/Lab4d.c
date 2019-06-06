#include "stdio.h"
/*Lucas Marchesani
4Feb19
Lab4D.c*/
int main ()
{
    //these are the Name variables
    char firstName[20]= {};
    char middleName[20]= {};
    char lastName[20]= {};
    //these are the number variables
    int firstNumber = 0;
    int secondNumber = 0;
    int endResult = 0;

    //prompts user for input and stores the variables with a max of 19 characters
    printf ("Please type your first name: "); 
    scanf ("%19s",firstName);
    printf ("Please type your middle name: ");
    scanf ("%19s",middleName);
    printf ("Please type your last name: ");
    scanf ("%19s",lastName);
    
    //outputs the variable strings, all seperated by a new line character
    printf("%s\t\n", firstName);
    printf("%s\t\n", middleName);
    printf("%s\t\n", lastName);

    //prompts users for integers
    printf("Please input your two integers seperated by an *: ");
    scanf("%d%*c%d", &firstNumber, &secondNumber);
    //stores the result of #1 & #2 being multiplied in a variable i can call later
    endResult = firstNumber * secondNumber;
    //calls all and prints
    printf("The result of %d multiplied by %d is %d \n", firstNumber, secondNumber, endResult);

    return 0;
}