//group: Kurtis, Marchesani. Barton, Gardener, Kruse
//project: Rock paper scissors that outputs to a text file

//includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "duckHeaders.h"

int main()
{
    // VARIABLE ZOO
    int looper, userChoice, npc;
    char name[15] = {0};
    char gameResult[50] = {0};
    int gameNumber = 0;
    int npcWin = 0;
    int userWin = 0;
    int draws = 0;
    int badInput = 0;
    
    // sets looper variable to 1 if they want to play, otherwise skips looper loop loop looping loop.
    printf("Do you want to play a game?\n [1]Yes\n [2]No\n");
    scanf("%d", &looper);
    system ("cls");   

    // play is the on/off switch for most of the program
    if (looper == 1) 
    {
        // Asks for user name which will later be used for saving the results
        printf("What name would you like to go by?\n");
        scanf("%s", &name); 
    }
    
    // loops until the user inputs a 2 at the end of a game
    while (looper == 1)
    {
        gameNumber++;
        userChoice = 0;
        npc = 0;

            printf("***Game Number: %d***\n", gameNumber);    
            printf("1 for Rock, 2 for Paper, or 3 for Scissors\n");
            scanf("%d", &userChoice);
            if (!userChoice)
            {
                badInput = 1;
                goto stop;
            }
            system ("cls");

            //npcChoice generates the random Computer choice for the game
            npc = npcChoice(npc);

    // MAIN GAME LOOP FOR COMPARING USER AND COMPUTER CHOICES
    // Outcome of the game is stored in gameResult
        
        // NPC ROCK
        if (npc == 1)
            {
                switch (userChoice)
                {
                    case 1:
                            strcpy(gameResult, "Computer: Rock \nUser: Rock \nDRAW\n\0");
                            printf("%s\n", gameResult);
                            draws++;
                            break;
                    case 2:
                            strcpy(gameResult, "Computer: Rock \nUser: Paper \nWIN\n\0");
                            printf("%s\n", gameResult);
                            userWin++;
                            break;
                    case 3:
                            strcpy(gameResult, "Computer: Rock \nUser: Scissors \nLOSS\n\0");
                            printf("%s\n", gameResult);
                            npcWin++;
                            break;
                    default:
                            strcpy(gameResult, "Game was whack\n\0");
                            badInput = 1;
                            goto stop;
                            break;
                }
            }
        // NPC PAPER
        else if (npc == 2)
            {
                switch (userChoice)
                {
                    case 1:
                            strcpy(gameResult, "Computer: Paper \nUser: Rock \nLOSS\n\0");
                            printf("%s\n", gameResult);
                            npcWin++;
                            break;
                    case 2:
                            strcpy(gameResult, "Computer: Paper \nUser: Paper \nDRAW\n\0");
                            printf("%s\n", gameResult);
                            draws++;
                            break;
                    case 3:
                            strcpy(gameResult, "Computer: Paper \nUser: Scissors \nLWIN\n\0");
                            printf("%s\n", gameResult);
                            userWin++;
                            break;
                    default:
                            strcpy(gameResult, "Game was whack\n\0");
                            badInput = 1;
                            goto stop;
                            break;
                }
            }
        // NPC SCISSORS
        else if (npc == 3)
            {
                switch (userChoice)
                {
                    case 1:
                            strcpy(gameResult, "Computer: Scissors \nUser: Rock \nWIN\n\0");
                            printf("%s\n", gameResult);
                            userWin++;
                            break;
                    case 2:
                            strcpy(gameResult, "Computer: Scissors \nUser: Paper \nLOSS\n\0");
                            printf("%s\n", gameResult);
                            npcWin++;
                            break;
                    case 3:
                            strcpy(gameResult, "Computer: Scissors \nUser: Scissors \nDRAW\n\0");
                            printf("%s\n", gameResult);
                            draws++;
                            break;
                    default:
                            strcpy(gameResult, "Game was whack\n\0");
                            badInput = 1;
                            goto stop;
                            break;
                }
            }
           
           // pass the user's name, outcome of the game, and which game number it was to the ouput function
           fileOutput(name, gameResult, gameNumber);
           printf("Do you want to play again?\n [1]Yes\n [2]No\n");
           scanf("%d", &looper);
           system ("cls");
    }
    // User no want to play game
    if(looper == 2)
    {
        printf("I guess youre too scared to lose, maybe next time.\n");
        looper = 0;
    }
    // User inputs something other than 1 or 2 to looper
    else
    {
        badInput = 1;
        goto stop;
    }
    // Shows game stats if there was a game played
    if (gameNumber > 0)
        {
            float winLossPercent = ((float)userWin/(float)gameNumber)*100;
            printf("\nAlright %s, here's how you did for your %d games:\n", name, gameNumber);
            printf("User wins: %d \nComputer wins: %d \nDraws: %d \nUser win percentage: %.0f%% \n", userWin, npcWin, draws, winLossPercent);
            return 0;
        }   
    stop: if (badInput ==1)
            {
                printf("Invalid Input\n");
            }  
}