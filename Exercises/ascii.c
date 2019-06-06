#include <stdlib.h>
#include <stdio.h>

int main()
{
    int asciiValue;
    int badInput=0;
    char newValue;

    printf("Please Input an ASCII value\n");
    scanf("%i",&asciiValue);

    if((asciiValue<0)||(asciiValue>127))
    {
        printf("Invalid Input");
        return 0;
    }
    system ("cls");
    newValue = asciiValue;

    printf("Your value of %i is %c",asciiValue,newValue);
    return 0;
}