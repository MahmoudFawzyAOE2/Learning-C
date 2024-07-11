#include <stdio.h>

int main()
{
    int money ;

    printf(" Enter the amount of money: ");
    scanf("%d", &money);

    int n50 = money / 50 ;

    int n25 = (money-n50*50) / 25 ;

    int n10 = (money-n50*50-n25*25) / 10 ;

    int n5 = (money-n50*50-n25*25-n10*10) / 5 ;

    int n1 = money-n50*50-n25*25-n10*10-n5*5 ;

    printf("Money is equal to\n %d of coin 50 \n %d of coin 25 \n %d of coin 10 \n %d of coin 5 \n %d of coin 1", n50,n25,n10,n5,n1);



}



