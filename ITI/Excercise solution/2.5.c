#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf(" Enter a number between 0 & 999999: ");
    scanf("%d",&n );

    int units ;
    int tens ;
    int hundreds ;

    int t_units ;
    int t_tens ;
    int t_hundreds ;


    t_hundreds = n/100000 ;
    t_tens = (n -t_hundreds*100000) /10000 ;
    t_units = (n -t_hundreds*100000 -t_tens*10000) /1000 ;

    int thousands = t_hundreds*100000 +t_tens*10000 +t_units*1000 ;

    hundreds = (n -thousands) /100 ;
    tens = (n -thousands -hundreds*100) /10 ;
    units = n -thousands -hundreds*100 -tens*10 ;
 /*thousands*/
    if(t_hundreds!=0)
        {
        switch (t_hundreds) {
            case 1:
                printf("One");
            break;
            case 2:
                printf("Two");
            break;
            case 3:
                printf("Three");
            break;
            case 4:
                printf("Four");
            break;
            case 5:
                printf("Five");
            break;
            case 6:
                printf("Six");
            break;
            case 7:
                printf("Seven");
            break;
            case 8:
                printf("Eight");
            break;
            case 9:
                printf("Nine");
            break;
                    }
        printf(" Hundred ");
        }

    if (t_tens != 0)
        switch (t_tens)
        {
            case 1:
                switch (t_units)
                    {
                    case 0:
                        printf("Ten");
                        break;
                    case 1:
                        printf("ELeven");
                        break;
                    case 2:
                        printf("Twelve");
                        break;
                    case 3:
                        printf("Thirteen");
                        break;
                    case 4:
                        printf("Fourteen");
                        break;
                    case 5:
                        printf("Fifteen");
                        break;
                    case 6:
                        printf("Sixteen");
                        break;
                    case 7:
                        printf("Seventeen");
                        break;
                    case 8:
                        printf("Eighteen");
                        break;
                    case 9:
                        printf("Nineteen");
                        break;
                    }

            break;
            case 2 :
                printf("Twenty ");
            break;
            case 3 :
                printf("Thirty ");
            break;
            case 4 :
                printf("Forty ");
            break;
            case 5 :
                printf("Fifty ");
            break;
            case 6 :
                printf("Sixty ");
            break;
            case 7 :
                printf("Seventy ");
            break;
            case 8 :
                printf("Eighty ");
            break;
            case 9 :
                printf("Ninety ");
            break;

        }
    if(t_units!=0 && t_tens!=1)
       switch (t_units) {
            case 1:
                printf("One");
            break;
            case 2:
                printf("Two");
            break;
            case 3:
                printf("Three");
            break;
            case 4:
                printf("Four");
            break;
            case 5:
                printf("Five");
            break;
            case 6:
                printf("Six");
            break;
            case 7:
                printf("Seven");
            break;
            case 8:
                printf("Eight");
            break;
            case 9:
                printf("Nine");
            break;
                    }
    if(t_hundreds!=0 && t_units!=0 && t_tens!=0)
        printf(" Thousand ");

 /*lower digits*/
    if(hundreds!=0)
        {
        switch (hundreds) {
            case 1:
                printf("One");
            break;
            case 2:
                printf("Two");
            break;
            case 3:
                printf("Three");
            break;
            case 4:
                printf("Four");
            break;
            case 5:
                printf("Five");
            break;
            case 6:
                printf("Six");
            break;
            case 7:
                printf("Seven");
            break;
            case 8:
                printf("Eight");
            break;
            case 9:
                printf("Nine");
            break;
                    }
          printf(" Hundred ");
        }
    if (tens != 0)
        switch (tens)
        {
            case 1:
                switch (units)
                    {
                    case 0:
                        printf("Ten");
                        break;
                    case 1:
                        printf("ELeven");
                        break;
                    case 2:
                        printf("Twelve");
                        break;
                    case 3:
                        printf("Thirteen");
                        break;
                    case 4:
                        printf("Fourteen");
                        break;
                    case 5:
                        printf("Fifteen");
                        break;
                    case 6:
                        printf("Sixteen");
                        break;
                    case 7:
                        printf("Seventeen");
                        break;
                    case 8:
                        printf("Eighteen");
                        break;
                    case 9:
                        printf("Nineteen");
                        break;
                    }

            break;
            case 2 :
                printf("Twenty ");
            break;
            case 3 :
                printf("Thirty ");
            break;
            case 4 :
                printf("Forty ");
            break;
            case 5 :
                printf("Fifty ");
            break;
            case 6 :
                printf("Sixty ");
            break;
            case 7 :
                printf("Seventy ");
            break;
            case 8 :
                printf("Eighty ");
            break;
            case 9 :
                printf("Ninety ");
            break;

        }
    if(units!=0 && tens!=1)
        switch (units) {
            case 1:
                printf("One");
            break;
            case 2:
                printf("Two");
            break;
            case 3:
                printf("Three");
            break;
            case 4:
                printf("Four");
            break;
            case 5:
                printf("Five");
            break;
            case 6:
                printf("Six");
            break;
            case 7:
                printf("Seven");
            break;
            case 8:
                printf("Eight");
            break;
            case 9:
                printf("Nine");
            break;
                    }
    if(thousands==0 && hundreds==0 && units==0 && tens==0)
        printf("Zero");
}
