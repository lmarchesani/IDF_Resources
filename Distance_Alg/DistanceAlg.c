#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculations(int X_1, int Y_1, int X_2, int Y_2);
int errorchecking(int x, int y);


int main()
{
    //will act as coordinates for the twoo points
    int X_1, Y_1, X_2, Y_2;

    //get values for the locations in X,y format 
    printf("Input the first grid location seperated by a space (Xvalue Yvalue)");
    scanf("%i %i",&X_1,&Y_1);
        //need to error check input
        int checking_value = errorchecking(X_1,Y_1);
        if (checkingValue == 1)
        {
            printf("Invalid input");
            return 0;
        }
        
    printf("Input the second grid location seperated by a space (Xvalue Yvalue)");
    scanf("%i %i",&X_2,&Y_2);
        //need to check input
        checking value = errorchecking(X_2,Y_2);
        if (checkingValue == 1)
        {
            printf("Invalid input");
            return 0;
        }
    double distance_between = calculations(X_1,Y_1,X_2,Y_2);

    printf("The distance between the two points is %lf",distance_between);
    return 0;

}

int errorchecking(int x, int y)
{
    int invalid_input = 0;

    if ((!x) || (!y) || (x<0) || (y<0))
    {
        invalid_input = 1;
    }
    return invalid_input;
}

int calculations(int X_1, int Y_1, int X_2, int Y_2)
{
    //variabel zoo for this function :)))))))
    int largerX;
    int smallerX;
    int largerY;
    int smallerY;
    //need to compare the values of both x coordinates and both y coordinates
    if (X_1>X_2)
    {
        largerX = X_1;
        smallerX = X_2;
    }
    else if (X_2>X_1)
    {
        largerX = X_2;
        smallerX = X_1;
    }
    if (Y_2>Y_1)
    {
        largerY = Y_2;
        smallerY = Y_1;
    }
    else if (Y_1>Y_2)
    {
        largerY = Y_1;
        smallerY = Y_2;
    }
    double y_result = (largerY-smallerY);
    double x_result = (largerX-smallerX);

    double xMultiple = x_result;
    double yMultiple = y_result;

    double distance = sqrt((x_result*xMultiple)-(y_result*yMultiple));

    return distance;



}