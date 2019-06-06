#include <stdio.h>

int main ()
{
    char MrPotatoHead[256] = {0};
         MrPotatoHead[0] = 'H';
         MrPotatoHead[1] = 'e';
         MrPotatoHead[2] = 'l';
         MrPotatoHead[3] = 'l';
         MrPotatoHead[4] = 'o';
    char MrsPotatoHead[256] = {0};
         MrsPotatoHead[0] = 'H';
         MrsPotatoHead[1] = 'o';
         MrsPotatoHead[2] = 'w';
         MrsPotatoHead[3] = 'd';
         MrsPotatoHead[4] = 'y';

    int TestArray[5] = {1,2,3,4,5};
    int you[] = {10,11,12,13,14,15,16,17,18,19,20}
    

    for(int a=0; a < sizeof(TestArray)/sizeof(int); a++) // this stuff is extra. just me messing around making sure I know whats going on
        {
            printf("%d \n", TestArray [a]);
        }

    printf("%s \n%s \n", MrPotatoHead, MrsPotatoHead);

    return 0;

}