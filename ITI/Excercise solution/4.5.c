#include <stdio.h>

int sum_until(int number);

void main(void)
{
    int num, result;
    printf("Enter number: ");
    scanf("%d", &num);

    result = sum_until(num);

    printf("Result: %d\n", result);
}

int sum_until(int number)
{
    int result = 1;

    if (number == 1)
    {
        return number;
    }
    else
    {
       result = number + sum_until(number-1);
       return result ;
    }
}
