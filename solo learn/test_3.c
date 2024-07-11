#include <stdio.h>

/* Declaration - Function prototype */
int sum_up (int x, int y);
void say_hello();
int factorial(int num);
void test(int k);
void swap (int *num1, int *num2);
int add_up (int *a, int num_elements);
int * get_evens();   /* this function returns an array*/

/* declaring a global variable*/
int global1 = 0;


int main3() {
    /*--------------------- FUNCTIONS -----------------*/
    /* Function: reusable block of code that performs a specific task
    • makes a program easier to test, modified without changing the calling program */

    // it is good to break down main() into subtasks implemented with functions.

    /* To use the function in the code below, we need to declare it above main().
    Declarations form:  return_type function_name( parameter type   parameter name);

    return_type: type of value the function sends back to the calling statement.
    function_name is followed by parentheses.
    Parameters (Optional): used to receive values required by the function.

    formal parameters: The parameters in a function declaration
    actual parameters: values passed to these parameters (arguments) in function call.*/

    /* not required to return a value from function,
    but a return type must still be in the declaration.

    example: display_message function does not return a value, the keyword void is used.
        void display_message();*/

    int y1 = 3, y2 = 12, result;
    result = sum_up(y1, y2);
    printf("%d + %d = %d", y1, y2, result);

    /* Variable scope : the visibility of variables within a program.
    Local variables: declared in a function, cannot be referred to outside the function.
    Global variables: declared outside all functions. visible to the entire program.
      example: constants declared with a #define at program top are global variables.*/

   int local1 = 5, local2= 10;
   global1 = local1 + local2;
   printf("%d \n", global1);  /* 15 */


   /*Static variables: have a local scope, not destroyed when a function is exited.
     - keeps its value for during execution, can be accessed each  function  re-call.
     - static variable is initialized when declared and requires the prefix static*/

   int i1;
   for (i1 = 0; i1 < 5; i1++) {
    say_hello();
   }

   /* Recursive function: function that calls itself and includes
    a base case, or exit condition, for ending the recursive calls.*/

   int f = 5;
   printf("The factorial of %d is %d\n", f, factorial(f));

   /*--------------------- ARRAYS -----------------*/

   /* Array: data structure that stores a collection of values of the same type (elements).
      - we can also initialize an array when it is declared
      - In C, index numbers start at 0. index is also referred to as subscript */

   int test_scores[25]; /* An array size 25 */
   float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99};
   float not_prices[5] = {3.2, 6.55};   /* Missing values are set to 0 */
   printf("The second element is %f\n", prices[1]); /* 6.55 */

   int arr[5] = {20, 45, 16, 18, 22};
   arr[1] = 260; /* accessing and editing an element*/
   printf("The second element is %d\n", arr[1]); /* 260 */

   /*traversing the array: accessing every element of an array to do a certain task
     - often implemented with a for loop, loop control variable indicates to array index*/


   float purchases[3] = {10.99, 14.25, 90.50};
   float total = 0;
   int i2;
   /* total the purchases */
   for (i2 = 0; i2 < 3; i2++) {
   total += purchases[i2];
    }
   printf("Purchases total is %6.2f\n", total);

   /* two-dimensional array: an array of arrays  name[rows][colums]
      - to access an element, both row and column index are required*/
   /*An array can have more than two dimensions, a[5][3][4]*/

   int a[2][3]; /* A 2 x 3 array */

   int b[2][3] = {
     {3, 2, 6},
     {4, 5, 20}
   };
   printf("Element 3 in row 2 is %d\n", b[1][2]); /* 20 */

   int c[2][3] = { {3, 2, 6}, {4, 5, 20} };
   c[1][2] = 25;
   printf("Element 3 in row 2 is %d\n", c[1][2]); /* 20 */

   /* to display array contents, nested for loops are used to traverse a 2-D array */
   int k, j;
   for (k = 0; k < 2; k++) {
     for (j = 0; j < 3; j++) {
       printf(" %d", a[k][j]);
     }
   printf("\n");
   }


   /*--------------------- POINTERS -----------------*/

   /*C is designed to be a low-level language that can easily access memory locations.
    - scanf() function puts the entered value at the location (address), of the variable.
    - This is accomplished by using the & symbol [&num is the address of variable num]
    - memory address is given as 8-digits hex number, each hex num is 4-bit [32-bit total]*/

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", num);
    printf("\n");

    int i = 0;
    printf("The address of i is %x\n", &i); /*%x is the hex format specifier*/
    test(i);
    printf("The address of i is %x\n", &i);
    test(i);
    /*variable address is the same from the time it is declared till the end of its scope.*/

    /* Pointers are important in C, they allow you to easily work with memory locations.
    pointer: variable that contains the address of another variable.
    pointer "points" to the location assigned to a variable, and can indirectly access it.
    Pointers are declared using * symbol.     form: [ pointer_type *identifier ]
    pointer_type: type of data the pointer is pointing to. actual pointer type is hex num.
    Asterisk * declares a pointer and should appear next to the identifier*/

    int obj = 63;
    int *p1 = NULL;
    p1 = &obj;
    printf("\n");
    printf("The address of j is %x\n", &obj);
    printf("p contains address %x\n", p1);
    printf("The value of j is %d\n", obj);
    printf("p is pointing to the value %d\n", *p1);

    /*Pointers can be used in expressions just as any variable.
     Arithmetic operators can be applied to whatever the pointer is pointing to.*/
    int x = 5, y;
    int *p = NULL;
    p = &x;

    y = *p + 2;  /* y is assigned 7 */
    y += *p;     /* y is assigned 12 */
    *p = y;      /* x is assigned 12 */
    (*p)++;      /* x is incremented to 13 */
    printf("p is pointing to the value %d\n", *p);

    /* Array declaration reserves a block of continuous memory addresses for elements.
    - we can traverse the array pointing to the first element then use address arithmetic:
      [+] is used to move forward to a memory location
      [-] is used to move backward to a memory location
      [ptr++][ptr--][ptr += 1] these syntaxes could be also used*/

    int ar[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i3;

    ptr = ar;  /* equal to     ptr = &ar[0] */
    for (i3 = 0; i3 < 5; i3++) {
        printf("%d ", *(ptr + i3));
    }
    printf("\n");


    /*With pointer parameters, functions can alter actual data rather than a copy of data. */
    int m = 25;
    int n = 100;

    printf("x is %d, y is %d\n", m, n);
    swap(&m, &n);
    printf("x is %d, y is %d\n", m, n);

    /*passing an array name to a function is passing a pointer to the array*/
    int orders[5] = {100, 220, 37, 16, 98};
    printf("Total orders is %d\n", add_up(orders, 5));

    /*if we want to return an array from a function
      a pointer, not an array, is declared to store the value returned by the function*/
    int *a2, k2;
    a2 = get_evens(); /* get first 5 even numbers */
    for (k2 = 0; k2 < 5; k2++)
    printf("%d\n", a2[k2]);


 return 0;
}

/* definition - the function itself */
int sum_up (int x, int y) {
  x += y;
  return(x);
}

void say_hello() {
  static int num_calls = 1;
  printf("Hello number %d\n", num_calls);
  num_calls++;
}

int factorial(int num) {
  if (num == 1)  /* base case */
    return (1);  /*if function was void, use return only [without (1)]*/
  else
    return (num * factorial(num - 1));
}
void test(int k) {
  printf("The address of k is %x\n", &k);
}

void swap (int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int add_up (int *a, int num_elements) {
  int total = 0, k;


  for (k = 0; k < num_elements; k++) {
    total += a[k];
  }

  return (total);
}

int * get_evens() {
  static int nums[5];
  int even = 0, k;

  for (k = 0; k < 5; k++) {
    nums[k] = even += 2;
  }

  return (nums);
}
