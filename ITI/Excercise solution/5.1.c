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

    /*separation on odd and even (by value)*/
    int odd_array[length];
    int even_array[length];
    int odd_index = 0, even_index = 0 ;
    int odd_array_size=0, even_array_size=0;

    for (i=0;i<length;i++)
    {
        if (arr[i] % 2 == 0)
        {
            /*even*/
            even_array[even_index] = arr[i];
            even_index++;
            even_array_size++;
        }
        else
        {
            /*odd*/
            odd_array[odd_index] = arr[i];
            odd_index++;
            odd_array_size++;
        }
    }

    printf("\n even values array:  ");
    display_array(even_array, even_array_size);
    printf("\n odd values array:   ");
    display_array(odd_array, odd_array_size);

}

void display_array (int arr[], int size)
{

    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}
