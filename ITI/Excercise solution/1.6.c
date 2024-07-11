#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ;

    printf(" Enter the Number: ");
    scanf("%f", &n);

    if (n==0)
        printf("zero", n);
    else if (n>0)
        printf("%f is positive number", n);
    else
        printf("%f is negative number", n);

}


