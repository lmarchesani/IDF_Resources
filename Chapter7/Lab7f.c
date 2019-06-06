#include "stdio.h"

int main()
{
    //declaration of array and the iterator for the loopity scoop
    char someDumbShit[] = {"This\nis\npretty\nstupid\0"};
    int iterator = 0;
    //uses a while loop to check each element for it being a character
    //starts at element 0 and then at the end of the loop it will increase iterator, which checks the next element
    while(someDumbShit[iterator] != NULL)
    {
        //prints the element 
        printf("%c",someDumbShit[iterator]);
        //if the element is a new line character, it will break
        if(someDumbShit[iterator] == '\n')
        {
            break;
        }
        iterator++;
    }
    return 0;
}