#include <stdlib.h>
#include <stdio.h>
#define MAX 100

struct {
 int Ident, Peak;
} graph[MAX];

int main ()
{
 FILE *fp = fopen("storms1.txt", "rt");
 for (int i=0; i < MAX; i++){
   if (fscanf(fp, " %i %i\n", &graph[i].Ident, &graph[i].Peak) < 5)
   {
    printf("hello\n\n %i\n\n %i",graph[i].Ident,graph[i].Peak);
    break;
   }
   printf("%i %i", graph[i].Ident, graph[i].Peak);
 }
 fclose(fp);
 return 0;
}