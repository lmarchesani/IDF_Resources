#include <stdio.h>
#include <stdlib.h>

int reverseIt (int change);

int main()
{
    //variable declaration. tops will be defined later
    int userInput, modifiedUserInput, i ,j, loop_logic;
    loop_logic = 0;
    
    //will keep program running as long as the user wants to continue using this program
    while(loop_logic==0)
    {
        //resets the value of these variables at the top of each loop to avoid any potential memory errors
        userInput = 0;
        modifiedUserInput = 0;

        //prompt user for the number they want to reverse
        printf("What digit would you like to reverse\n");
        scanf("%i",&userInput);

        //error checking for invalid input including NULL or negative
        if((userInput<0))
        {
            printf("Invalid input\n");
            return 0;
        }

        //store the value of userInput into modifiedUserInput to pass it into reverseIt
        modifiedUserInput = userInput;
        reverseIt(modifiedUserInput);

        //prints the value returned by the function

        //prompts user to see if they want to redo this all again
        printf("Would you like to reverse another number?\n 1) Yes 2) No\n");
        scanf("%i",&i);

        if (i==1)
        {
            loop_logic = 0;
        }
        else 
        {
            printf("Goodbye, Peasant\n");
            loop_logic = 1;
        }

    }
}

int reverseIt (int change)
{
    int n = change;
    int reverse = 0;
    //while the int being changed isn't 0, this will run
    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + (n%10);
        n = n/10;
    }
    //prints the result of the swap
     printf("Your number is now %i\n",reverse);
     //returns this value to be stored in modifiedUserInput
     return n;
}