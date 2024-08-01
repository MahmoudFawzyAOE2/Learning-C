#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    int pointer=0;

    while (1)
    {
       if (s[pointer] == ' ')
       {
            printf("\n");
    
       }
       else if (! (s[pointer]))
       {
           break;
       }
       else 
       {
           printf("%c", s[pointer]);

       }
       
       pointer++;
    }
    