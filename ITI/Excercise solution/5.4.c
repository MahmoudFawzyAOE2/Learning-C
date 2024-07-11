#include <stdio.h>

void display_array (int arr[], int size);
int sum_array (int arr[], int size);

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


    int sum;
    sum = sum_array (arr, length);
    printf("\n%d is the sum of the array",sum);

}

void display_array (int arr[], int size)
{
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int sum_array (int arr[], int size)
{

    int sum=0;

    if (size == 1)
    {
        return arr[0];
    }
    else
    {
       sum = arr[size-1] + sum_array (arr, size-1);
       return sum ;
    }
}
