#include <stdio.h>
void swap (int *n1, int *n2);

void main(void)
{
    int num1, num2;
    printf("Enter First number: ");
    scanf("%d", &num1);

    printf("Enter second number number: ");
    scanf("%d", &num2);

    swap (&num1, &num2);

    printf("First number : %d\n", num1);
    printf("Second Number: %d\n", num2);
}

void swap (int *n1, int *n2)
{

    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
