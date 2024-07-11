#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b = 0;

    printf(" Enter the Triangle Base: ");
    scanf("%f", &b);

    float h = 0;

    printf(" Enter the Triangle Hight : ");
    scanf("%f", &h);


    float area = 0.5 * b * h ;
    printf("Triangle Area: %7.2f", area) ;
}


