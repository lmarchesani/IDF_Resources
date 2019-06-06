#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //multiples to do math with
    //distance
    float inches_to_meters = 0.0254;
    float meters_to_inches = 39.3701;
    //volume
    float liters_to_quarts =  1.05669;
    float quarts_to_liters = 0.946353;
    //mass
    float kilograms_to_pounds = 2.20462;
    float pounds_to_kilograms = 0.453592;

    int convertFrom; 
    int inches, meters,liters,quarts,kilograms,pounds;
    float result;
    
    //prompt user for what they want to convert
    printf("What unit would you like to convert from 1)inches 2)meters 3)liters 4)quarts 5)kilograms 6)pounds are the only acceptable inputs\n");
    scanf("%i",&convertFrom);
    system("cls");

    //breaks up user input
    switch(convertFrom)
    {
    int badValueMain=1;
    //inches
    case 1:
        printf("");
        printf("Inches to meters selected\n");
        //prompts user for input
        printf("How many inches would you like to convert to meters\n");
        scanf("%i",&inches);
        //error checking to ensure to invalid input
        if (!inches)
        {
            printf("NULL input\n");
            badValueMain = 0;
        }
        //not negative or excessively large
        if ((inches<=0)||(inches>10000))
        {
            printf("Invalid Input\n");
            badValueMain = 0;
        }
        //if it passes, it does this math
        if (badValueMain!=0)
        {
        //cast the int unit to a float to do math
        result = ((float)inches*inches_to_meters);
        printf("%i inches is %f meters\n",inches,result);
        }
        break;
    case 2:
        printf("");
        printf("meters to inches selected\n");
        printf("How many meters would you like to convert to inches\n");
        scanf("%i",&meters);
        //error checking
        if (!meters)
        {
            printf("NULL input\n");
            badValueMain = 0;
        }
        //non negative or large
        if ((meters<=0)||(meters>10000))
        {
            printf("Invalid Input\n");
            badValueMain = 0;
        }
        //if it passes this will execute
        if (badValueMain!=0)
        {
        result = ((float)meters*meters_to_inches);
        printf("%i meters is %f inches\n",meters,result);
        }
        break;
    case 3:
        printf("");
        printf("liters to quarts selected\n");
        //prompt user for number of units
        printf("How many liters would you like to convert to quarts\n");
        scanf("%i",&liters);
        //error checking
        if (!liters)
        {
            printf("NULL input\n");
            badValueMain = 0;
        }
        //non negative or too large
        if ((liters<=0)||(liters>10000))
        {
            printf("Invalid Input\n");
            badValueMain = 0;
        }
        //execute math
        if (badValueMain!=0)
        {
        result = ((float)liters*liters_to_quarts);
        printf("%i liters is %f quarts\n",liters,result);
        }
        break;
    case 4:
        printf("");
        printf("quarts to liters selected\n");
        //prompt users for units
        printf("How many quarts would you like to convert to liters\n");
        scanf("%i",&quarts);
        //non null
        if (!quarts)
        {
            printf("NULL input\n");
            badValueMain = 0;
        }
        //non negative or too large
        if ((quarts<=0)||(quarts>10000))
        {
            printf("Invalid Input\n");
            badValueMain = 0;
        }
        //if it passes, this will execute
        if (badValueMain!=0)
        {
        result = ((float)quarts*quarts_to_liters);
        printf("%i quarts is %f liters\n",quarts,result);
        }
        break;
    case 5:
        printf("");
        printf("kilograms to pounds selected\n");
        //prompt user for units
        printf("How many kilograms would you like to convert to pounds\n");
        scanf("%i",&kilograms);
        //error checking
        if (!kilograms)
        {
            printf("NULL input\n");
            badValueMain = 0;
        }
        //non negative or too large
        if ((kilograms<=0)||(kilograms>10000))
        {
            printf("Invalid Input\n");
            badValueMain = 0;
        }
        //math block
        if (badValueMain!=0)
        {
        result = ((float)kilograms*kilograms_to_pounds);
        printf("%i kilograms is %f pounds\n",kilograms,result);
        }
        break;
    case 6:
        printf("");
        printf("pounds to kilograms selected\n");
        printf("How many pounds would you like to convert to kilograms\n");
        scanf("%i",&pounds);
        if (!pounds)
        {
            printf("NULL input\n");
            badValueMain = 0;
        }
        if ((pounds<=0)||(pounds>10000))
        {
            printf("Invalid Input\n");
            badValueMain = 0;
        }
        if (badValueMain!=0)
        {
        result = ((float)pounds*pounds_to_kilograms);
        float kilograms = (result/1000);
        printf("%i pounds is %f kilograms\n",pounds,result);
        }
        break;
    default:
        printf("Error!\n");
        return 0;
        break;
    }
}