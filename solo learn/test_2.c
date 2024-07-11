#include <stdio.h>

int main2() {

    /*--------------------- Conditionals -----------------*/
    /* if executes statements when an expression is true
       if expression is false, it moves to the else if after (else if is optional)
       if all expressions are false, else statements executed (else is optional)
        if (expression)
            statements
        else if (expression)
            statements
        else
            statements*/
    /* Relational operators forms a Boolean expression, returns true or false:
    <    less than     <=  less than or equal to     ==  equal to
    >    greater than  >=  greater than or equal to  !=   not equal to*/
    int score = 89;
    if (score >= 90)
        printf("%s", "Top 10%\n");
    else if (score >= 80)
        printf("%s", "Top 20%\n");
    else if (score > 75)
        printf("%s", "You passed.\n");
    else
        printf("%s", "You did not pass.\n");

    // An expression that evaluates to a non-zero value is considered true.
    int in_stock = 20;
    if (in_stock)
        printf("Order received.\n");

    /* The ?: operator can have only one statement associated with the if - else.*/
    int y;
    int x = 3;

         y = ( x >= 5  ) ?  5 : x;
    // var = (condition) ?  T : F
    printf("%d \n\n", y);

    /* This is equivalent to:
    if (x >= 5)
        y = 5;
    else
        y = x;
    */

    /* if statement can include another if statement to form a nested statement
       an else is associated with the closest if unless curly braces { } are used*/
    int profit = 500, clients = 10,bonus;
    if (profit > 1000) {
        if (clients > 15)
            bonus = 100;
    }
    else
        bonus = 25;

    /*switch statement branches program control
     by matching the result of an expression with a constant case value
     default statements executed when all values don't match (default is optional)
     break; is needed in each case to end  the switch statement execution

     switch (variable) {
        case val1:
            statements
            break;
        case val2:
            statements
            break;
        default:
            statements
        }*/
    int m = 5;
    switch (m) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Not 1, 2, or 3.\n");
}

    /*  AND operator && : True if both are True
        OR  operator || : True if one is true
        NOT operator !  : flips the boolean result */
    int n = 51;
    if (n == 999 || ((n > 0 && n <= 100) && !(n == 50)))
            printf("number is 999 or between 1 & 100 but not 50 .\n\n");

    /*--------------------- Loops -----------------*/
    /* while statement is a loop,
     it executes statements repeatedly while an expression is true
     while (expression) {
        statements
     }*/
     /*infinite while: one that loops nonstop, condition never evaluates to false.
      This may cause a run-time error*/

     int count = 1;
     while (count < 8) { // loop will print Count 7 times [1-7]
        printf("Count = %d\n", count);
        count++;
     }

     /*do-while loop executes the loop statements before evaluating the expression
      if expression is True, the loop should be repeated
        do {
            statements
        } while (expression); */
     int c = 1;
     do {
        printf("Count = %d\n", c);
        c++;
     } while (c < 8); // semicolon after while

     /* continue: used to remain in the loop, but skip ahead to the next iteration.
      break: used to get out of the entire loop*/
      int num = 20;
      while (num > 0) {
          if (num == 10)
              break;     // stop at 10
          else if ( num % 2 == 0 ){
              num--;
              continue;} // even nums will not be printed
          printf("%d\n", num);
          num--;
      }

      /*for statement: loop structure, executes statements a fixed number of times
      initvalue: counter, set to an initial value. This part is performed only once.
      condition: Boolean expression, compares counter to a value before each loop iteration,
      True: execute statements, False: stop the loop.
      increment: increases (or decreases) the counter by a set value
        for (initvalue; condition; increment) {
            statements;
        } */
      // for loop can contain multiple expressions separated by commas in each part

      int x1, x2,  r = 10;
      for (x1 = 0, x2 = r  ;x1 < x2;  x1++, x2--) {
          printf("%d\n", x1);
      }

      // you can skip the initvalue, condition and/or increment.int i=0;
      int idx = 0, maxi = 10;
      for (; idx < maxi; idx++) {
         printf("%d\n", idx);
      }
      // Loops can also be nested.
      int i, j, table = 10, max = 12;

      for (i = 1; i <= table; i++) {
         for (j = 0; j <= max; j++) {
             printf("%d x %d = %d\n", i, j, i*j);
         }
         printf("\n"); /* blank line between tables */
    }

return 0;
}
