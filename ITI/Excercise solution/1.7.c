
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;

    printf(" Enter the Number: ");
    scanf("%d", &n);

    if (n%2==0)
        printf("%d is an even number", n);
    else
        printf("%d is an odd number", n);

}


