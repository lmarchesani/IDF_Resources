#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variable declaration
    int i, x, y, len;
    char str[100];

    //prompts user for input
    printf("Enter a string : ");
    scanf("%[^\n]s", &str);

    //gets the length of the string so we know how long to cycle later
    len = strlen(str);
    //so we can cycle through the string word by word
    str[len] = ' ';
    
    //to search through the string
    for (x = 0, i = 0; i < strlen(str); i++)
    {   
        //if the  first letter in the string is b, print it
        if((i == 0) && (str[i] == 'b'))
        {
            x = i;
            while(str[x] != ' ')
            {
                printf("%c", str[x]);
                x++;
            }
            printf("\n");
        }
        //for all other words in the string, also I dont want to deal with upper case letters so im not using the to upper function and comparing it to B
        if((str[i] == ' ') && (str[i+1] == 'b'))
        {    
            {
                x = i + 1;
                //allows us to safely cycle through the string and not attempt to go further than the length of the string
                while(str[x] != ' ' && x < len)
                {
                    printf("%c", str[x]);
                    x++;
                }
                printf("\n");
            }
            i++;
        }
    }
    return 0;
}