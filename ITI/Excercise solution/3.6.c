#include <stdio.h>

int main() {
    int decimal, remainder, quotient;
    int base, i = 0;
    char conversion[100];

    printf("Enter the decimal number: ");
    scanf("%d", &decimal);

    printf("Enter the base for conversion (2 for binary, 8 for octal, 16 for hexadecimal): ");
    scanf("%d", &base);

    quotient = decimal;
    printf("quotient: %d \n", quotient);

    // Repeatedly dividing the decimal number by the base and storing the remainders
    while (quotient != 0) {
        remainder = quotient % base;

        // Convert remainder to corresponding character (0-9, A-F)
        if (remainder < 10)
            conversion[i++] = remainder + '0';
        else
            conversion[i++] = remainder - 10 + 'A';
        quotient /= base;
    }

    // Reverse the conversion string to get the correct order of digits
    conversion[i] = '\0'; // Add null terminator

    strrev(conversion);

    printf("Equivalent number in base %d: %s\n", base, conversion);

}
