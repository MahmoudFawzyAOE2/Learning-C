#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l = 0;

    printf(" Enter the rectangle length: ");
    scanf("%f", &l);

    float w = 0;

    printf(" Enter the rectangle width : ");
    scanf("%f", &w);


    float area = w * l ;
    printf("Rectangle Area: %7.2f", area) ;
}

