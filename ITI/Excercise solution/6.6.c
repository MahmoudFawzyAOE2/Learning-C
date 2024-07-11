#include <stdio.h>
#include <string.h>
void append_string(char * merged_string, char * small_string );

void main(void)
{
    char * string1="apple";
    char * string2="orange";

    /*dedicate enough memory for the 2 strings + /0*/
    char *merged_string=malloc(strlen(string1) + strlen(string2) + 1);

    /*initialization to be empty, to avoid weird outputs*/
    merged_string[0] = '\0';


    append_string(merged_string,string1);
    append_string(merged_string,string2);

    printf("Merged string: %s\n", merged_string);

}

void append_string(char * merged_string, char * small_string )
{

    /*start appending after the last char in merged_string*/
    int i=strlen(merged_string);
    while (* small_string != '\0')
    {
        merged_string[i]= *small_string;
        i++;
        small_string++; /*go to next char*/

    }
}
