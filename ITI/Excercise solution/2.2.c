#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ;

    printf(" Enter the Student Mark: ");
    scanf("%f", &n);

    if (n>=90)
        printf("Excellent");
    else if (n>=80)
        printf("Very good");
    else if (n>=65)
        printf("Good");
    else if (n>=50)
        printf("Pass");
    else
        printf("Fail");

}

