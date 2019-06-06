#include <stdio.h>
#include <stdlib.h>
#define NROWS 8
#define NCOLS 7
void col_ave(int col);
int average=0,greater=0,smallest=0,choice,power[NROWS][NCOLS];
int main()
{
    //open up that bad boi
    FILE *fp = fopen("power1.dat","r");
    //make sure that bad boi opened
    if (fp == NULL)
    {
        printf("ERROR OPENING FILE");
        fclose(fp);
        return 0;
    }
    else
    {
        //scanfs the rows in from the file and will store it in a 2d array and stores it in the same format
        for(int i=0;i<NROWS;i++)
        {
            fscanf(fp,"%i %i %i %i %i %i %i",&power[i][0],&power[i][1],&power[i][2],&power[i][3],&power[i][4],&power[i][5],&power[i][6]);
        }
        smallest=power[0][0];
        //search dat array to assign the smallest value found (which will be 21 after examing the file)
        for(int i=0;i<NROWS;i++)
        {
            for(int j=0;j<NCOLS;j++)
            {
                average += power[i][j];
                if(power[i][j]<smallest)
                {
                    smallest = power[i][j];
                }
            }
        }
        //takes the running total of all the array and divides it by the multiple of rows*columns (56)
        average = average/(NROWS*NCOLS);
        for(int i=0;i<NROWS;i++)
        {
            for(int j=0;j<NCOLS;j++)
            {
                //counter the number times total power produced that day 
                if (power[i][j]>average)
                {
                    greater++;
                }
            }
        }
        for(int i=0;i<NROWS;i++)
        {
            for(int j=0;j<NCOLS;j++)
            {
                //determines if the current value of the 2d array is equal to 21, and if it is then it prints the week and day that it occurred
                if(power[i][j]==smallest)
                {
                    switch (j)
                    {
                        case 0:
                            printf("The smallest power output happened on week %i on Sunday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        case 1:
                            printf("The smallest power output happened on week %i on Monday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        case 2:
                            printf("The smallest power output happened on week %i on Tuesday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        case 3:
                            printf("The smallest power output happened on week %i on Wednesday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        case 4:
                            printf("The smallest power output happened on week %i on Thursday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        case 5:
                            printf("The smallest power output happened on week %i on Friday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        case 6:
                            printf("The smallest power output happened on week %i on Saturday with a power output of %iMW\n",(i+1), power[i][j]);
                            break;
                        default:
                            break;
                    }  
                }
            }
        }
        printf("The average power output is:%iMW. The amount of days with higher power output is:%i days. The smallest power output was %iMW\n",average,greater,smallest);
        printf("Enter which day you would like to see the average of\n1)Sunday 2)Monday 3)Tuesday 4)Wednesday 5)Thursday 6)Friday 7)Saturday\n>");
        fscanf(stdin,"%i",&choice);
        if (choice <1 || choice >8)
        {
            printf("INCORRECT INPUT");
            fclose(fp);
            return(0);
        }
        else
        {
            col_ave(choice);
        }
    }
}
void col_ave(int x)
{
    int average=0;
    for (int i=0;i<NROWS;i++)
    {
        average+=power[i][x];
    }
    printf("The average is: %iMW\n",(average/NROWS));
}