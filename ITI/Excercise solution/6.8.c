#include <stdio.h>
#include <string.h>
void main(void)
{
    char * string1="apple juice";
    int string1_len = strlen(string1);

     /*dedicate enough memory for the 2 strings + /0*/
    char *rev_string=malloc(string1_len + 1);

    /*initialization to be empty, to avoid weird outputs*/
    rev_string[0] = '\0';

    int i , flag = 0;
    for (i=0;i<string1_len;i++ )
    {
        printf("\nOriginal string: %c", * (string1 + string1_len -1 -i));
        rev_string[i] = * (string1 + string1_len -1 -i);
    }

    printf("\nOriginal string: %s", string1);
    printf("\nReversed string: %s", rev_string);
}
