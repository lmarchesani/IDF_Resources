#include "stdio.h"
#include "math.h"
#include "inttypes.h"
#include "stdlib.h"

int main ()
{
    //variable declaration
    uint32_t userInput = 0;
    uint32_t bitChecker = 0x01;
   
    //prompting user and storing userInput 
    printf("Input a positive number please\n");
    fscanf(stdin, "%u", &userInput);
    //just moves the 0001 to the front of the 32 bits
    bitChecker = bitChecker << 31;

    while (bitChecker > 0)
    {
        if ((bitChecker & userInput) == 0)
        {
            fprintf(stdout,"0");
        }
        else 
        {
            fprintf(stdout,"1");
        }
            
        bitChecker = bitChecker >> 1;
        //I WAS RIGHT
    }
    return 0;
}