#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variable declarations
    int i, x, y, len;
    char str[100];

    //prompts user for the string tney want examined
    printf("Enter a string : ");
    scanf("%[^\n]s", &str);
    //clears the screen
    system("cls");

    //assigns length the size of the string so we can cycle through it later
    len = strlen(str);
 
    //makes it safe to cycle through later
    str[len] = ' ';
 
    //makes sure we dont go beyond the length of the string
    for (x = 0, i = 0; i < strlen(str); i++)
    {
        //searches for e and d at the end of the string
        if ((str[i] == ' ') && (str[i - 1] == 'd') && (str[i - 2] == 'e'))
        {
            for (y = x; y < i; y++)
                printf("%c", str[y]);
            x = ++i;
            printf(" ");
        }
        //we didnt find the bitch in the string so we just cycle to the next word in the string
        else
        {
            if (str[i] == ' ')
            {
                x = i + 1;
            }
        }
    }
    return 0;
}