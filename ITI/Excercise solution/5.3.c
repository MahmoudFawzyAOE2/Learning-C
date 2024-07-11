#include <stdio.h>

void display_array (int arr[], int size);
int max_array (int arr[], int size);

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


    int max_num;
    max_num = max_array (arr, length);
    printf("\n%d is the maximum number in the array",max_num);


}

void display_array (int arr[], int size)
{

    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int max_array (int arr[], int size)
{

    int i, max_num=arr[0];
    for (i=1;i<size;i++)
    {
        if (arr[i]>max_num)
            max_num = arr[i];
    }
    return max_num;

}
