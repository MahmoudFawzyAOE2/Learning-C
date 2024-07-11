#include <stdio.h>

void display_array (int arr[], int size);

void main(void)
{
    int length, i;
    int arr[50];
    printf("Enter length of array: ");
    scanf("%d", &length);

    /*inserting values in array*/
    for (i=0;i<length;i++)
    {
        printf("Enter value[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    display_array(arr,length);

    /*get value to be inserted*/
    int value ;
    printf("\nEnter value to be inserted: ");
    scanf("%d", &value);

    /*detect its place within the sorted array*/
    int position ;
    for (i=length-1;i<=length;i--)
    {
        if (arr[i]<value)
        {
            position = i+1;
            break;
        }
    }

    /*inserting value in position*/
    for (i=length;i<=length;i--)
    {
        if (i == position)
        {
            arr[i] = value;
            break;
        }
        else
            arr[i] = arr[i-1] ;
    }

    length++ ;
    printf("\n array after insertion :  ");
    display_array(arr,length);
}

void display_array (int arr[], int size)
{

    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}
