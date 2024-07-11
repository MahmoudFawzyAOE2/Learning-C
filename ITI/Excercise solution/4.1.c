#include <stdio.h>
void convert2binary(int decimal);

void main(void)
{
    int decimal;
    printf("Enter the decimal number: ");
    scanf("%d", &decimal);

    convert2binary(decimal);
}

void convert2binary(int decimal)
{
    int base = 2 , i = 0, remainder, quotient;;
    char conversion[100];
    quotient = decimal;

    // Repeatedly dividing the decimal number by the base and storing the remainders
    while (quotient != 0)
    {
        remainder = quotient % base;
        // Convert remainder to corresponding character
        conversion[i++] = remainder + '0';
        quotient /= base;
    }

    // Reverse the conversion string to get the correct order of digits
    conversion[i] = '\0'; // Add null terminator

    strrev(conversion);

    printf("Equivalent number in base 2: %s\n", conversion);
}
