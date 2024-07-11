#include <stdio.h>

void main(void)
{
    char * string1="apple juice";
    char * string2="apple fruit";

    int i = 0, flag = 0;
    while (* string1 != '\0'  || * string2 != '\0' )
    {
        if (*string1 !=  *string2)
            {
                printf("\nStrings are different in letter [%d] \n %c in string1 \n %c in string2\n", i, * string1, * string2 );
                flag = 1;
            }
        else
            printf("\nletter [%d] is the same {%c}\n", i, * string1);
        * string1++;
        * string2++;
        i++;
    }

    if (flag = 0)
        printf("\nboth strings are totally the same ");
}
