#include <stdio.h>

void display_array (int arr[], int size);

void main(void)
{
    int array1[]={1, 2, 3, 5, 7, 8};
    int array2[]={4, 6, 9};

    int len_arrray1 = 6, len_arrray2 = 3, i;


    display_array(array1,len_arrray1);
    display_array(array2,len_arrray2);

    /*merging  the 2 arrays*/

    int merged_array[len_arrray1+len_arrray2];

    for (i=0;i<(len_arrray1);i++)
    {
        merged_array[i]=array1[i];
    }

    for (i=len_arrray1;i<(len_arrray1+len_arrray2);i++)
    {
        merged_array[i]=array2[i-len_arrray1];
    }
    printf("\n merged array:  ");
    display_array(merged_array, len_arrray1+len_arrray2);
}

void display_array (int arr[], int size)
{
    int i;
    printf("\n array:  ");
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
