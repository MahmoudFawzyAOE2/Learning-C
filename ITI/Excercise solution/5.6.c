#include <stdio.h>

void display_array (int arr[], int size);
int binary_search_array (int arr[], int upper,int lower, int value);

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

    /*binary search*/
    int value, position;
    printf("\nEnter value you want to find: ");
    scanf("%d", &value);
    position = binary_search_array(arr, length-1, 0, value);
    if (position==-1)
        printf("%d cannot be found in the array",value);
    else
        printf("%d is located in the array at position %d",value, position+1);
}

void display_array (int arr[], int size)
{
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int binary_search_array (int arr[], int upper,int lower, int value)
{
    int mid = (lower+upper)/2 ;
    if (value == arr[mid])
    {
        return mid;
    }
    else if (value > arr[mid])
    {
        binary_search_array (arr, upper,mid+1, value);
    }
    else if (value < arr[mid])
    {
        binary_search_array (arr, mid+1,lower, value);
    }
    else
        return -1 ;
}
