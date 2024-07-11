#include <stdio.h> // including standard input & output functions
/**/
#define PIIII 3.14 // #define preprocessor directive for constants., [no;]

int main1() {
    // main curly brackets & semicolon is a must
    // with    \n : the cursor moves to the next line
    // without \n : the cursor stays at the end of printed statement
    printf("Hello, World!\n");
    printf("Hello, World!");
    printf("Hello, World!\n\n");

    /*--------------------- C basic data types -----------------

       int: integer, a whole number.
       float: floating point, a number with a fractional part.
       double: double-precision floating point value.
       char: single character. */
    /* sizeof operator gives memory requirements for a  data type. */
    /* printf statements here have two arguments.
       first is the output string with a format specifier (%ld)
       printf can have multiple format specifiers */
    printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char:  %ld %ld %ld \n\n", sizeof(char),sizeof(char), sizeof(char));

    /* variable name (identifier) must begin with letter or underscore */
    /* Variables must be declared as a data type before usage.
       or declare & initialize (assign an initial value) in a single statement */
    /* C programming language is case-sensitive*/
    int a, b;
    float salary = 56.23;
    char letter = 'Z';
    a = 8;
    b = 444;
    int c = a+b;

    /* format specifiers for int(%d) & float(%f) & char(%c).*/
    printf("%d \n", c);
    printf("%f \n", salary);
    printf("%c \n\n", letter);

    /* Constant stores value that cannot be changed from its initial assignment, else Error.
       UPPERCASE identifiers to differentiate from variables*/
    const double PI = 3.14;

    /* another way to define a variable is with #define preprocessor directive

     preprocessor replaces every macro identifier in code with its corresponding value from the directive.
     In this case, every occurrence of PI is replaced with 3.14.
     The final code sent to the compiler will already have the constant values in place.
     const uses memory for storage,  #define does not. */


     /*--------------------- User I/O ---------------*/

     /*getchar() Returns the value of the next single character input*/
     /*putchar() Outputs a single character.*/
     printf("Enter charcters:");
     char m = getchar();
     printf("You entered: ");   putchar(m);
     /*or*/
     printf("\nYou entered: %c\n", m);

     /*gets() reads input as an ordered sequence of characters (string)
       puts() displays output as a string. */
     char n[5];
     gets(n);
     printf("You entered: "); puts(n);
     /*or*/
     printf("You entered: %s\n", n);

     //scanf() scans input that matches format specifiers
     /* & sign before p is address operator (not used with char or with printf).
     It gives the memory location of a variable.
      scanf places an input value at a variable address*/

     /* Format specifiers used to assign values to arguments after the string.
      Blanks, tabs, and newlines are ignored.*/

     /* General formula I/P: %[*][max_width]conversion character
      optional * will skip the input field.
      optional max_width gives the max number of characters to assign to input field.
      conversion character converts the argument, if necessary, to the indicated type:
      d decimal  c character  s string   f float  x hexadecimal */
     int x1, x2;
     float floating;
     char text[20];
     printf("Enter two numbers (separated by space):");
     scanf("%2d %d %f %*f %5s", &x1, &x2, &floating, text);
     printf("\nSum: %d %d %f %s\n", x1, x2, floating, text);

     /* General formula O/P: %[-][width].[precision]conversion character
      optional - specifies left alignment of the data in the string.
      optional width gives the minimum number of characters for the data.
      optional precision gives the number of decimal places for numeric data*/
     printf("Pi = %3.2f\n", 3.14159);
     printf("Pi = %8.5f\n", 3.14159);
     printf("Pi = %-8.5f\n", 3.14159);

     /*--------------------- Operators ---------------*/
     /*  + (add), - (subtract), * (multiply), / (divide), % (modulus divide)*/
     /* The *, /, and % are performed first and from left to right, then + and - .*/
     /* using parentheses ( ) to indicate which operations are to be performed first*/
     int length = 10, width = 5, area;
     area = length * width;  //  50

     int i1 = 10;
     int i2 = 3;
     int quotient, remainder;
     float f1 = 4.2;
     float f2 = 2.5;
     float result;
     quotient = i1 / i2; // 3
     remainder = i1 % i2; // 1
     result = f1 / f2; // 1.68

     /* Type Conversion: when a numeric expression has operands of different data types,
      they are automatically converted. [ex: int + float = float] */
     float price = 6.50, new_price;
     int increase = 2;
     new_price = price + increase; // 8.50

     // Type Casting: force the result of an expression to a different type
     float average;
     int total = 23, count = 4;
     average = (float) total / count;  /* average = 5.75 */

     /* Assignment statement: evaluates the right side expression of = ,
      then assigns that value to the variable on the left side */
      int x = 1, y, z;
      x = x + 1;  /* x is now 2 */
      x += 1;  // 3
      x -= 1;  // 2
      x *= 3;  // 6
      x /= 2;  // 3
      x %= 2;  // 1
      x += 3 * 2;  // 7

      /*The increment(++) and decrement(--) operators can be used either
       prefix (before the variable name) or postfix (after the variable name) */
      z = 3;
      x = z--;  /* assign 3 to x, then decrement z to 2 */
      y = 3;
      x = ++y;  /* increment y to 4, then assign 4 to x */


    /* return statement terminates the main() function
       number 0 generally means that program has successfully executed.
       Any other number indicates that the program has failed */
    return 0;
}
