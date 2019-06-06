#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main()
{
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;

    printf("Please input your two legs seperated by a space \n");
    scanf("%lf %lf", &sideA, &sideB);

    if (sideA&&sideB>0)
    {
        //this will only be done if the input is valid
        sideC= sqrt((sideA*sideA)+(sideB*sideB));
        printf("Your hypotenuse is %.4f \n", sideC);
        return 0;
    }
    else
    {
        printf("Get out of here with that nonsense, man\n");
        return 0;
    }
    
}