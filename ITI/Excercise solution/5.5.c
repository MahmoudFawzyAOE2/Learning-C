#include <stdio.h>

void display_array (int arr[], int size);
int linear_search_array (int arr[], int size, int value);

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

    /*linear search*/
    int value, position;
    printf("\nEnter value you want to find: ");
    scanf("%d", &value);
    position = linear_search_array(arr, length, value);
    if (position==-1)
        printf("%d connot be found in the array",value);
    else
        printf("%d is located in the array at position %d",value, position+1);
}

void display_array (int arr[], int size)
{
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int linear_search_array (int arr[], int size, int value)
{
    int i, position=-1;
    for (i=0;i<size;i++)
    {
        if (arr[i]==value)
            position = i;
    }
    return position;
}
