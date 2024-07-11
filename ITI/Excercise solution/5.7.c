#include <stdio.h>

void display_array (int arr[], int size);
void binary_search_array (int arr[], int size);

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

    /*bubble sort*/
    bubble_sort_array(arr, length);
    printf("\narray after bubble sort");
    display_array(arr,length);
}

void display_array (int arr[], int size)
{
    int i;
    printf("\n array:  ");
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void bubble_sort_array (int arr[], int size)
{
    int i, flag = 0 ;
    do
    {
        flag = 0 ;
        for (i=0;i<size-1;i++)
        {
            if (arr[i]>arr[i+1])
            {
            int temp = arr[i];
            arr[i] =arr[i+1];
            arr[i+1] = temp;
            flag = 1 ;
            }
        }
        display_array(arr,size);
    } while (flag) ;
}
