#include <stdio.h>


int power(int number, int pow);

void main(void)
{
    int num, pow, result;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter power: ");
    scanf("%d", &pow);

    result = power(num, pow);

    printf("Result: %d\n", result);

}

int power(int number, int pow)
{
    int result = 1;

    if (pow == 1)
    {
        return number;
    }
    else
    {
       result = number * power(number, --pow);
       return result ;
    }

}
