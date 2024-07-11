#include <stdio.h>
#include <math.h>

int main() {
    unsigned int income;
    float tax=0;
    printf("Enter annual income: ");
    scanf("%d", &income);

    if (income > 200000)
        {
            tax += (income - 200000) * 0.4;
            income = 200000 ;
        }

    if (income > 45000 && income <= 200000)
        {
            tax += (income - 45000) * 0.4;
            income = 45000;
        }

    if (income > 20000 && income <= 45000)
        {
            tax += (income - 20000) * 0.4;
            income = 20000;
        };

    if (income > 7000 && income <= 20000)
        {
            tax += (income - 7000) * 0.4;
            income = 7000;
        }
    printf("Total Tax: %f", tax);

}
