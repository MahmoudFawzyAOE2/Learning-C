#include <stdio.h>

void display_array (int arr[], int size);

void main(void)
{
    int length, i;
    printf("Enter length of array: ");
    scanf("%d", &length);

    int arr[length];

    /*inserting values in array*/
    for (i=0;i<length;i++)
    {
        printf("Enter value[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    display_array(arr,length);

    /*reverse array*/
    int reverse_array[length];

    for (i=0;i<(length);i++)
    {
        reverse_array[i]=arr[length-i-1];
    }

    printf("\n reverse array:  ");
    display_array(reverse_array, length);
}

void display_array (int arr[], int size)
{
    int i;
    printf("\n array:  ");
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
