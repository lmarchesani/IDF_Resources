#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evenOrOdd (int tester);

int main()
{
    //variables to be defined later
    int userInput[5] = {0};
    int i =0 ,j = 0;
    int looper = 0;
    
    printf("Input  5 integers into the array until you are happy (if you need more than 19 numbers to be happy, too bad)\n");
    while (looper<5)
    {
        //stores the user input in seperate elements of the integer array
        printf("");
        scanf("%i",&userInput[i]);
        //validate this input
        if ((userInput[i]<0)||!(userInput[i]))
        {
            printf("Invalid Input!");
            return 0;
        }
        i++, looper++;
    }
    system("cls");
    //pass it in one value at a time
    for (j=0;j<5;j++)
    {
        int passItIn = userInput[j];
        int returnValue =  evenOrOdd(passItIn);
        if (returnValue==0)
        {
            printf("%i is not even\n",userInput[j]);
        }
        else 
        {
            printf("%i is even\n",userInput[j]);
        }
    }
return 0;
}


//where the magic happens, baby
int evenOrOdd (int tester)
{
    int status;
    if (tester == 0)
    {
        status = 0;
        tester = status;
        return tester;
    }
    else if ((tester%2)==1)
    {
        status = 0;
        tester = status;
        return tester;
    }
    else 
    {
        status = 1;
        tester = status;
        return tester; 
    }
}