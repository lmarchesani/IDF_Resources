#include <stdio.h>
#include <math.h>

int main(void)
{
    int input1 = 0;
    int input2 = 0;
    int input3 = 0;

    printf("Please input two integers \n");
    fscanf(stdin,"%d %d", &input1, &input2);

    if (input1 == input2)
    {
        printf("Error 404, brain not found \n");
    }
    else if (input1 > input2)
    {
        input3 = input1;
    }
    else
    {
        input3 = input2;
    }
    if ((input1+input2+input3)>2)
    {  
    int endResult = input1+input2+input3;
    printf("Since your numbers combined are greater than two, the sum of all three things are %d \n", endResult);
    }
    
return 0;
}