#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients of the equation (ax^2 + bx + c = 0)\n\n");

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);


    if (a == 0)
        printf("Error: The equation is not quadratic (a cannot be zero).\n");
    else
    {

    // discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
        {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %7.2f\n", root1);
        printf("root2 = %7.2f\n", root2);
        }
    else if (discriminant == 0)
        {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %7.2f\n", root1);
        }
    else
        {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex:\n");
        printf("root1 = %7.2f + %7.2fi\n", realPart, imaginaryPart);
        printf("root2 = %7.2f - %7.2fi\n", realPart, imaginaryPart);
        }
    }
}
