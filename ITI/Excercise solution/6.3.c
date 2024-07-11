#include <stdio.h>

void main(void)
{
    char * string = "this is a string";
    int length;

    while (*string != '\0')
    {
        *string++;
        length++;
    }
    printf("%d\n",length);
}
