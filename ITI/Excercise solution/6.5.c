#include <stdio.h>

void main(void)
{
    int length;
    printf("Enter Length: ");
    scanf("%d", &length);

    int *d_array=malloc(length + 1);
    *d_array= '/0';

    /*store elements*/
    int i;
    int value;
    for (i=0;i<length;i++)
    {
        printf("Enter value [%d]: ",i+1);
        scanf("%d", &value);
        *(d_array + i) = value;
    }

    /*display the array*/
    printf("\narray: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", *(d_array + i));
    }
    printf("\n");

    /*get max*/
    int max_value = *d_array;
    for (i=0;i<length;i++)
    {
        if (max_value < *(d_array + i)) max_value = *(d_array + i);
    }
    printf("Maz value: %d ",max_value);
}
