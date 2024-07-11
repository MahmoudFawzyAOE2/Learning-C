#include <stdio.h>


void main(void)
{
    int num1, num2, sum;
    int * ptr1 = &num1, *ptr2 = &num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    sum = *ptr1 + *ptr2;
    printf("Sum: %d", sum);



}
