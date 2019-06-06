#include "stdio.h"
//Lucas Marchesani
//29Jan19
//Lab2B
int main()
{
    //initialization of variables
    int Test = 65;
    float Cases = 7.1;
    double Are = 7.123456;
    char Dumb = 'Z';
    int Man = 33;

    //where the issues start.. print & casting
    //when ints are cast to chars, its corresponding ascii value will be producedd
    printf("Your int %d is casted to a float %f \n", Test, (float)Test);
    printf("Your int %d casted to a char %c \n", Test, (char)Test); //Must put number between 65-90 || 97-122 to achieve a letter. anything else will produce a symbol or special character
    printf("Your float %f casted to a double %lf \n", Cases, (double)Cases);
    printf("Your double %lf casted to a float %f \n", Are, (float) Are);
    printf("Your char %c casted to an int %d \n", Dumb, (int) Dumb);
    printf("The number %d cast to a char %c", Man, (char)Man); //should execute and produce a bang

    return 0;
}