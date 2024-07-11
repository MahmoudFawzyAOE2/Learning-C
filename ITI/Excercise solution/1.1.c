#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0;

    printf(" Enter the Square side length: ");
    scanf("%f", &x);

    float area = x * x ;

    printf("Square Area: %7.2f", area) ;
}
