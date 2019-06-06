#include "stdio.h"
/*Lucas Marchesani*/

int main()
{
    int Int_1 = 10;
    float Float_1 = 1.7;
    double Double_1 = 1.76;
    char char_1 = 'A';

    printf("Integer_1 is %d \n", Int_1);
    printf("The size of Integer-1 is %d \n", sizeof (Int_1));
    printf("Float_1 is %f \n", Float_1);
    printf("The size of Float_1 is %d \n", sizeof (Float_1));
    printf("Double_1 is %lf \n", Double_1);
    printf("The size of Double_1 is %d \n", sizeof (Double_1));
    printf("Character_1 is %c \n", char_1);
    printf("The size of Character_1 is %d \n",sizeof (char_1));

    return 0;
}