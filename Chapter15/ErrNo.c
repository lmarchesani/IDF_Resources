#include stdio.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
    FILE * pFile;
    pFile = fopen ("unexist.ent","rb");
    if (pFile == NULL)
    {
        printf( "Error Value is : %s\n", strerror(errno) );
    }
    else
    {
        fclose (pFile);
        return 0;
    }
}