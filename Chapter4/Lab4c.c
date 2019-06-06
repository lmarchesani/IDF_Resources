#include "stdio.h"
// Lucas Marchesani
//4Feb19
//Lab4B.c
int main ()
{
    char UserInput[10] = {};
    printf("This is to input your string: ");
    fgets(UserInput, sizeof(UserInput), stdin);
    printf("This is the output: ");
    fputs(UserInput,stdout);
    printf("\n");

    return 0;
}