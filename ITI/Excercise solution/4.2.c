#include <stdio.h>

void is_prime (int num);

void main(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    is_prime(num);
}

void is_prime (int num)
{
    int divisior = num-1 ;

    while (divisior > 1)
    {
        if (num % divisior == 0)
        {
            printf("%d is not prime as it could be divided by %d\n", num, divisior);
            break ;
        }
        else
        {
            divisior-- ;
        }
    }

    if (divisior==1)
        printf("%d is a prime number", num, divisior);

}
