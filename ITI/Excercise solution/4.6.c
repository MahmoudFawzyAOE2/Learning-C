#include <stdio.h>

int fact(int number);

void main(void)
{
    int num, result;
    printf("Enter number: ");
    scanf("%d", &num);

    result = fact(num);

    printf("Result: %d\n", result);
}

int fact(int number)
{
    int result = 1;

    if (number == 1)
    {
        return number;
    }
    else
    {
       result = number * fact(number-1);
       return result ;
    }
}
