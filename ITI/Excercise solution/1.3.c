#include <stdio.h>
#include <stdlib.h>

# define PI 3.14
int main()
{
    float r = 0;

    printf(" Enter the Circle radius : ");
    scanf("%f", &r);


    float area = PI * r * r;
    printf("Circle Area: %7.2f", area) ;
}

