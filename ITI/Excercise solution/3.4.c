#include <stdio.h>

int main() {
    int n, i ;
    float value, average;

    printf("Enter number of values you will enter: ");
    scanf("%d", &n);


    for (i=1; i<n+1; i++)
        {

        printf("Enter value [%d]: ",i);
        scanf("%f", &value);

        average +=value ;
        }

    average = average / n ;
    printf("\n \n Average is  %7.2f  \n ",average);

}

