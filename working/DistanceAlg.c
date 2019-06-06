#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int errorchecking(double x, double y);


int main()
{
    //will act as coordinates for the twoo points
    double X_1, Y_1, X_2, Y_2;
    int checking_value = 0;
    int looper = 1;
    while (looper==1)
    {
        //get values for the locations in X,y format 
        printf("Input the first grid location seperated by a space (Xvalue Yvalue)");
        scanf("%lf %lf",&X_1,&Y_1);
            //need to error check input
            checking_value = errorchecking(X_1,Y_1);
            if (checking_value == 1)
            {
                printf("Invalid input");
                return 0;
            }
            system("cls");
            
        printf("Input the second grid location seperated by a space (Xvalue Yvalue)");
        scanf("%lf %lf",&X_2,&Y_2);
            //need to check input
            checking_value = errorchecking(X_2,Y_2);
            if (checking_value == 1)
            {
                printf("Invalid input");
                return 0;
            }
            system("cls");
            
        double y_result = (Y_2-Y_1);
        double x_result = (X_2-X_1);

        double distance = sqrt(((x_result*x_result)+(y_result*y_result)));

        

        printf("The distance between the two points is %lf \n\n",distance);
        printf("Would you like to calculate another distance? 1)yes 0)no\n");
        scanf("%i",&looper);
        
    
    }
    return 0;

}

int errorchecking(double x, double y)
{
    int invalid_input = 0;

    if ((!x) || (!y) || (x<0) || (y<0))
    {
        invalid_input = 1;
    }
    return invalid_input;
}