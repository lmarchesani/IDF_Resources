#include "stdio.h"
/*Lucas Marchesani 
4Feb19
Lab4A.c*/
int main ()
{
    int UserInput = 0;
    printf ("Please put in a character: "); // prompts user for input
    UserInput = getchar(); // gets char and  stores it in UserInput
    printf("the next sequential character is: "); // prints UserInput+1
    putchar(UserInput + 1); // takes the UserInput variable and makes it the next sequential ASCII character

    return 0;
}