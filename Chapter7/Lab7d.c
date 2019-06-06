#include "stdio.h"
#include "math.h"

int main()
{
    //variable declaration
    char operater = 0;
    int input1 = 0;
    int input2 = 0;
    int result = 0;
    
    //scanning in my junk variables
    printf("Please enter two numbers separated by a mathematical operator\n");
    scanf("%i%c%i", &input1, &operater, &input2);
    switch(operater)
    {
        //addition
        case '+':
            result = (input1 + input2);
            printf("%i+%i = %i\n", input1, input2, result );
            break;

        //subtraction    
        case '-':
            result = (input1 - input2);
            printf("%d-%d = %d\n", input1, input2, result);
            break;

        //multiplication
        case '*':
            result = (input1 * input2);
            printf("%d*%d = %d\n", input1, input2, result);
            break;

        //division
        case '/':
            printf("%d/%d = %.2lf\n", input1, input2, ((double)input1/input2));
            break;

        //break
        default:
            printf("Error");
            break;
    }
    return 0;
}