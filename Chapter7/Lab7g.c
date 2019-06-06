#include "stdio.h"
#include "math.h"

int main()
{
    int integer[26] = {};
    char character[] = {};
    int i = 0;
    

    do
    {
        fgets(character, 1, stdin);
        toupper(character[i]);
        integer[i] = character[i];
        i++;
    }
    while (character[i] != '\n');

    for (int a=0; a<1; a++)
    {
        printf("%s",integer);
    }
}