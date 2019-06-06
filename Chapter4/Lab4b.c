#include "stdio.h"
// Lucas Marchesani
//4Feb19
//Lab4B.c
int main ()
{
    int UserInput = 0;
    printf("Please input a character please:"); // prompts for userinput
    UserInput = getc(stdin); // saves the character and reads it in from stdin
    printf("The previous character to your input is "); // prints it
    putc((UserInput - 1), stdout);
    printf("\n");

    return 0; 
}