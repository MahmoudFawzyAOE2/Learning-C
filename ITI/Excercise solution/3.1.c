#include <stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    int n, i ;
    unsigned int value, max=0;

    printf("Enter number of values you will enter: ");
    scanf("%d", &n);


    for (i=1; i<n+1; i++)
        {

        printf("Enter value [%d]: ",i);
        scanf("%d", &value);

        if(value > max)
            max = value;

        printf("\n \n Current Max value is %d \n ",max);
        }

}

