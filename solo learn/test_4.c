#include <stdio.h>

// including Standard Library string functions
#include <string.h>

int main() {

    /*--------------------- FUNCTIONS -----------------*/

    /* String: array of characters that ends with a NULL character '\0'*/
    /*string size must be at least one character longer than expected string length*/
    char str1[6] = "hello"; // string literal is a text enclosed in double quotation
    char str2[ ] = "world";  /* size 6 */

    /* null char must be added here, each letter is enclosed in a single quotation mark */
    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */

    //printf(str3);
    //printf(str4);

    /* string pointer declaration is considered constant & cannot be changed from its initial value */
    char *str5 = "stuff";

    /*    Standard Library string functions
    strlen() - get length of a string
    strcat() - merge two strings
    strcpy() - copy one string to another
    strlwr() - convert string to lower case
    strupr() - convert string to upper case
    strrev() - reverse string
    strcmp() - compare two strings
    */

    /* string input  is handled with  scanf(),  gets(), fgets() functions .
       string output is handled with  printf(), puts(), fputs() functions*/
    /* scanf() to read input according to the format specifiers
       no need for & to access the variable address, an array name acts as a pointer
       scanf() stops reading input when it reaches a space. */
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);
    printf (first_name, age);

    /* gets() reads input until a terminating newline is reached (Enter key pressed)*/
    char second_name[50];
    printf("Enter your second name: ");
    gets(second_name);
    puts(second_name); // adds a newline to output

    /* - fgets()reads up to a certain number of characters.to prevent a buffer overflow,
          ( happens when the string array isn't big enough for the typed text )
       - fgets() arguments are the string name, the number of characters to read,
            pointer to where you want to read the string from.
            stdin means to read from the standard input, which is the keyboard
       - fgets() stores the newline character (reads only n-1, room for '\0' ) . */
    char third_name[50];
    printf("Enter your third name: ");
    fgets(third_name, 50, stdin);
    fputs(third_name, stdout); //requires string name and a pointer on where to print

    // sprintf() used for building a string from other data types.
    char info1[100];
    char dept[ ] = "HR";
    int emp = 75;
    sprintf(info1, "The %s dept has %d employees.", dept, emp);
    printf("%s\n", info1);

    // sscanf() used for scanning a string for values (split a string by spaces)
    char info2[ ] = "Seattle WA 13190";
    char city[50], state[50];
    int population;
    sscanf(info2, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.", population, city, state);






    return 0;
}
