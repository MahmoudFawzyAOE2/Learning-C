#include <stdio.h>
#include <windows.h>

void xycoords (int x , int y);

int main()
{
    int n ;
    int row=1 ;
    int col ;
    int i, delay;


    do
    {
        printf(" Enter an Odd number: ");
        scanf("%d",&n);
    }while(n%2==0);

    printf("\n");
    col = (n+1)/2;
    for(i=1;i<=(n*n);i++)
    {
        xycoords(row,col*5);
        printf("%3d",i);
        if(i%n)
        {
            row--;
            if(row==0)row=n;
            col--;
            if(col==0)col=n;
        }
        else
            row++;
        for (delay=1; delay<100000000; delay++);
    }

}

void xycoords (int row , int col)
{
    COORD c;
    c.X = col;
    c.Y = row;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
