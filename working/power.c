#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NROWS 8
#define NCOLS 7

int average, power[NROWS][NCOLS], smallest, greater;
int i=0,j=0,k=0;

int main()
{
    //open that bad boi up 
    FILE * power1 = fopem("power1.dat", "rt");
    //did it open?
    if (!power)
    {
        printf("file not opened");
        return 0;
    }
    //guess it did open
    else
    {
        //lets read in the full file
        while(k<NROWS)
        {
            fscanf(power1,"%i %i %i %i %i %i %i",&power[i][0],&power[i][1],&power[i][2],&power[i][3],&power[i][4],&power[i][5],&power[i][6]);
            k++;
        }
        //assigns smallest to the value of the value in 0,0.. as it cycles through the 2d array, it will add the values of each element to a running total. in additino, it checks if the value in each of the spots is smaller than the one prior, so at the end fo the array we have the smallest value in the variable smallest
        smallest = power[0][0];
        for(i=0;i<NROWS;i++)
        {
            for(j=0;j<NCOLS;j++)
            {
                average += power[i][j];
                if(power[i][j]<smallest)
                {
                    smallest = power[i][j];
                }
            }
        }
        //divides the total of the elements by 56 (NROWS*NCOLS)
        average /= 56;
    }

    





    /*
    // Opens the score file if it exists, otherwise makes the file. Writes to new file, appends to existing file.
    FILE * myFile_ptr = fopen("power_output.txt", "a"); 
    
     // Verify fopen() succeeded…
    if (myFile_ptr != NULL) 
    {
        fprintf(myFile_ptr, message,variable in message );
        fprintf(myFile_ptr, message,variable in message );
        fclose(myFile_ptr); 
    }
    else 
    {
        printf("Error occurred while trying to open file");
        return -1;
    } 
    return 0;*/
}