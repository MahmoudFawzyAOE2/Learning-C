#include <stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    int n, i ;
    unsigned int value, min=UINT_MAX;

    printf("Enter number of values you will enter: ");
    scanf("%d", &n);


    for (i=1; i<n+1; i++)
        {

        printf("Enter value [%d]: ",i);
        scanf("%d", &value);

        if(value < min)
            min = value;

        printf("\n \n Current Min value is %d \n ",min);
        }

}
