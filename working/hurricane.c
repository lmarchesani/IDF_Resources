#include <stdio.h>
#include <stdlib.h>
//for this program to work with a different file, youd have to adjust a lot of numbers in the code (ie in the block starting on line 68, the block on 23, and the block on line 58)
int main()
{
    int speed[5];
    int identification[5];
    int category[5];
    //make the file my bitch
    FILE *hurricane = fopen("storms1.txt","r");
    //make sure it opened
    if (!hurricane)
    {
        printf("ERROR OPENING FILE\n");
        fclose(hurricane);
        return 0;
    }
    //if it did, lets get the ID number and the speed
    else 
    {
        //lets fill the array with the information read in from the file hurricane
        for(int i=0;i<5;i++)
        {
            fscanf(hurricane,"%d %d",&identification[i],&speed[i]);
        }
        //lets give that speed a category
        for(int i=0;i<5;i++)
        {
            if (speed[i] <= 74)
            {
                printf("That little storm aint to hurricane.. Get outta here with that shit\n");
                category[i]=0;
            }//cat 1
            else if(speed[i] <= 96)
            {
                category[i]=1;
            }//cat 2
            else if (speed[i] <= 111)
            {
                category[i]=2;
            }//cat 3
            else if (speed[i] <= 131)
            {
                category[i]=3;
            }//cat 4
            else if (speed[i] <= 155)
            {
                category[i]=4;
            }//cat 5 or any other weird things that may occur
            else
            {
                category[i]=5;
            }
        }
        //assign element 0 of the speed array the largest
        int largest=speed[0];
        for (int i=1;i<5;i++)
        {
            if (largest<speed[i])
            {
                largest=speed[i];
            }
        }
        //a printing format for the output
        printf("Identification  Peak Wind(mph)  Category\n");
        //tihs is where it prints the arrays to output the right id, speed, and cat
        for (int i=0;i<5;i++)
        {
            if (category[i]==0)
            {
                continue;
            }
            printf("%i",identification[i]);
            if (speed[i]==largest)
            {
                printf("*");
            }
            printf("\t\t%i",speed[i]);
            printf("\t\t%i\n",category[i]);
        }
    }
    //fclose whatever you fopen
    fclose(hurricane);
    return 0;
}