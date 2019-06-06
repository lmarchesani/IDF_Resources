#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int fileOutput(char * name, char * stringResult, int gameNumber) // stringResult is the name of the string once passed into fileOutput
{
    // VARIABLE ZOO
    char fileName[20] = {0};
    char fileExten[5] = ".txt";
    
    // Adds the ".txt" extension to the persons name. This becomes the file name
    strcpy(fileName, name);
    strcat(fileName, fileExten);

    FILE * openTest_ptr = fopen(fileName, "r");
    if (openTest_ptr == NULL) // Checking to see if a score file exists already
    {
        printf("Scores file not found, we'll create it \n");
    }
    fclose(openTest_ptr); // Always fclose anything you fopen
    
    FILE * myFile_ptr = fopen(fileName, "a"); // Opens the score file if it exists, otherwise makes the file. Writes to new file, appends to existing file.
    
    if (myFile_ptr != NULL) // Verify fopen() succeeded… 
    {
        fprintf(myFile_ptr, "***Game Number: %d***\n", gameNumber);
        fprintf(myFile_ptr, "%s\r", stringResult);
        fclose(myFile_ptr); // Always fclose anything you fopen
    }
    else 
        printf("Error occurred while trying to open file. #RIPinpeaces \n");
        return -1; // This is our error return. In main function, can have a message like "error during file write operation"
    return 0;
}