#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    // storing elements in array
    int temp = 0;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &temp);
        arr[i] = temp;
    }
    
    //get the sum
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    
    free(arr);
    return 0;
}