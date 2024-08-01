#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    int freq[10] = {0};
    
    int pointer=0;

    while (1)
    {
       if (isdigit(s[pointer]))
       {
           freq[s[pointer]-48]= freq[s[pointer]-48] + 1;
       }
       else if (! (s[pointer]))
       {
           break;
       }
       pointer++;
    }
    // Print the frequency array
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    return 0;
}
