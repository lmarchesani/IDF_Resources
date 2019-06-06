#include "stdio.h"
#include "math.h"
#include "inttypes.h"

//declaring the second function before we go on 
void binaryOutput(signed int Arkansas);
//ya main boi
int main ()
{
    //initializarion of userInput variable
    signed int Texas = 0;

    //scanning in a variable fom user input
    printf("please input a number \n");
    scanf("%d", &Texas);

    //checking if user input is a negative number
    if (Texas < 0 )
    {
        //Tells user input is negative
        printf("The number you input is negative \n");
        //calls the function and outputs the negative value in binary
        binaryOutput (Texas);
        //formatting newline
        printf("\n");
    }
    //if its a positive number, it will come here
    else
    {
        //Tells user their input is positive
        printf("The number you input is positive \n");
        binaryOutput(Texas);
        printf("\n");
        //flips the userinput and i am going to add one to do two's compliment
        Texas = ~(Texas);
        ++Texas;
        //calls the function and outputs the new negative value
        binaryOutput(Texas);
        //formatting newline
        printf("\n");
    }
}

//calling this function will cause the inputs value to be output to binary
void binaryOutput (signed int Arkansas)
{
    //variable to check bits
    unsigned int bitChecker = 1;
    //moves the one all the way over to make sure you can check value
    //Only prints 8 bits
    bitChecker = bitChecker << 16;
    //where the actual binary output is made (recycling code, yay!) 
    while (bitChecker > 0)
    {
        if ((bitChecker & Arkansas) == 0)
        {
            fprintf(stdout,"0");
        }
        else 
        {
            fprintf(stdout,"1");
        }    
        bitChecker = bitChecker >> 1;
    }

}
