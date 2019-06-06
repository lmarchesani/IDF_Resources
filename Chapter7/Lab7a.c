#include "stdio.h"
#include "math.h"

int main()
{
    char testCasesAreDumb [20] = {};

    fprintf(stdout, "Please input a string");
    fscanf(stdin,"%s",&testCasesAreDumb);

    if (testCasesAreDumb[0]>=32 && testCasesAreDumb[0]<=126)
    {
        fprintf(stdout, "%s",testCasesAreDumb);
        return 0;
    }
    else
    {
        fprintf(stdout, "Get outta here with that nonsense, man");
        return 0;
    }
}