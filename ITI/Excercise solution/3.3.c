#include <stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    int n, i ;
    float value, max= FLT_MIN, min=FLT_MAX;

    printf("Enter number of values you will enter: ");
    scanf("%d", &n);


    for (i=1; i<n+1; i++)
        {

        printf("Enter value [%d]: ",i);
        scanf("%f", &value);

        if(value < min)
            min = value;

        if(value > max)
            max = value;

        printf("\n \n Current Range is from  %7.2f to %7.2f \n ",min, max);
        }

}
