#include <stdio.h>
#include <math.h>
float sin_rad(float number);
int fact(int number);
void main(void)
{
    float result;
    float angle_rad, angle_deg;
    printf("Enter angel in degrees : ");
    scanf("%f", &angle_deg);

    angle_rad = angle_deg * M_PI / 180.0;

    result = sin_rad(angle_rad);

    printf("Result custom: %f\n", result);
    printf("Result ideal : %f\n", sin(angle_rad));

}

float sin_rad(float a)
{

    /*Taylor expansion of sine function*/
    float result ;
    result = a  - (pow(a,3)/fact(3)) +(pow(a,5)/fact(5)) -(pow(a,7)/fact(7)) +(pow(a,9)/fact(9));
    return result;
}


int fact(int number)
{
    int result = 1;

    if (number == 1)
    {
        return number;
    }
    else
    {
       result = number * fact(number-1);
       return result ;
    }
}
