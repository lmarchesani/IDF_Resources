#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int npcChoice (int npc)            
{   
    // VARIABLE ZOO
    int upper = 3, lower = 1;
    
    // Chooses a random number between 1 and 3
    npc = (rand() % (upper - lower + 1)) + lower;
 
    return npc;    
}