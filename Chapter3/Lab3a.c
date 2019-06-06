#include "stdio.h"

int main ()
{
    int numberOfStudents[15] = {0};
    numberOfStudents[0] = 29;                // the = # is the age of the students
    numberOfStudents[1] = 20;
    numberOfStudents[2] = 21;
    numberOfStudents[3] = 22;
    numberOfStudents[4] = 23;
    numberOfStudents[5] = 24;
    numberOfStudents[6] = 25;
    numberOfStudents[7] = 26;
    numberOfStudents[8] = 27;
    numberOfStudents[9] = 28;
    numberOfStudents[10] = 30;
    numberOfStudents[11] = 31;
    numberOfStudents[12] = 32;
    numberOfStudents[13] = 33;
    numberOfStudents[14] = 34;

        for (int i = 0; i < (sizeof(numberOfStudents)/sizeof(int)); i++)
            {
                printf("Your array, sir: %d \n ", numberOfStudents[i]);
            }

    char FavQuote[] = {'G','I','V','E','\n','M','E','\n','L','I','B','E','R','T','Y','\n','O','R','\n','G','I','V','E','\n','M','E','\n','D','E','A','T','H','\n'};
    
        for (int h = 0; h < (sizeof(FavQuote)/sizeof(char)); h++) 
            {
                printf("%c", FavQuote[h]);
            }

    return (0);
}