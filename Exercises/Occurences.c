#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variable declaration
    char str[100];char ch;char *ptr;
    int i = 0;
    //prompts user for the string they want searchec
    printf("Type your string that you want to be searched through: ");
    fgets(str, sizeof(str), stdin);
    //prompts for substirng
    printf("What character do you want to search for?\n");
    scanf("%c", &ch);
    if (!ch)
    {
        printf("The substring is null");
        return 0;
    }
    //using the strchr function, returns a ptr to the time it was used
    ptr = strchr(str, ch);
    //goes until it reaches a null terminator
    while(*ptr != '\0')
    {
        //counters the occurences of the substring and cycles through the string
        if(*ptr == ch)
        {
            i++;
            ptr++;
        }
        //cycles through the string if no substring
        else
        {
            ptr++;
        }
    }
    if (i>=1)
    {
        printf("The character %c occurred %d times in the string\n", ch, i);
        goto a;
    }
    printf("The substring was not in the string");
    a:
    return 0;
}
