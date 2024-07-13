#include <stdio.h>
#include <conio.h>
#include <windows.h>

void strprint (char* str);
void gotoxy (int X , int Y);
void drawTable(void);
HANDLE hStdout, hStdin;
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;


int main()
{
    char arr[4][30]={" Option 1                    ",
                     " Option 2                    ",
                     " Option 3                    ",
                     " Option 4                    "};
    char pos=1;
    int chr1, chr2;

    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    // draw the border table
    drawTable();

    //drawing static text
    SetConsoleTextAttribute(hStdout, 26);
    gotoxy(46,11);
    strprint(arr[0]);

    gotoxy(46,12);
    strprint(arr[1]);

    gotoxy(46,13);
    strprint(arr[2]);

    gotoxy(46,14);
    strprint(arr[3]);

    gotoxy(46,11);
    while(chr2!=13)
    {
    chr2 = getch();  //to read arrow key
    switch(chr2)
    {
    case 72:
        pos--;
        if(pos<=0)
            pos=4;
        break;
    case 80:
        pos++;
        if(pos>=5)
            pos=1;
        break;
    };

    switch(pos)
    {
    case 1:

    // set
    SetConsoleTextAttribute(hStdout, 26);

    gotoxy(46,12);
    strprint(arr[1]);

    gotoxy(46,13);
    strprint(arr[2]);

    gotoxy(46,14);
    strprint(arr[3]);

    SetConsoleTextAttribute(hStdout,225);

    gotoxy(46,11);
    strprint(arr[0]);
    gotoxy(46,11);


        break;

    case 2:
    SetConsoleTextAttribute(hStdout, 26);


    gotoxy(46,11);
    strprint(arr[0]);

    gotoxy(46,13);
    strprint(arr[2]);

    gotoxy(46,14);
    strprint(arr[3]);


    SetConsoleTextAttribute(hStdout,225);

    gotoxy(46,12);
    strprint(arr[1]);
    gotoxy(46,12);


        break;

    case 3:
    SetConsoleTextAttribute(hStdout, 26);


    gotoxy(46,11);
    strprint(arr[0]);


    gotoxy(46,14);
    strprint(arr[3]);

    gotoxy(46,12);
    strprint(arr[1]);


    SetConsoleTextAttribute(hStdout,225);

    gotoxy(46,13);
    strprint(arr[2]);
    gotoxy(46,13);

        break;

    case 4:
    SetConsoleTextAttribute(hStdout, 26);

    gotoxy(46,11);
    strprint(arr[0]);

    gotoxy(46,12);
    strprint(arr[1]);

    gotoxy(46,13);
    strprint(arr[2]);

    SetConsoleTextAttribute(hStdout,225);

    gotoxy(46,14);
    strprint(arr[3]);
    gotoxy(46,14);
        break;
    };

    }

    gotoxy(46,24);

}

void gotoxy (int X , int Y)
{
    COORD c;
    c.X = X;
    c.Y = Y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void drawTable(void)
{
    /*the outer table border consist of 6 lines
    first & list line are horizontal continuous border
    the middle fore are discrete borders but they will appear as continuous in display*/
    int i;

    // line 1
    SetConsoleTextAttribute(hStdout, 26);
    gotoxy(45,10);
    printf("%c",201);
    for(i=0;i<29;i++)
        printf("%c",205);
    printf("%c",187);

    //line2
    gotoxy(45,11);
    printf("%c",186);
    gotoxy(75,11);
    printf("%c",186);

    //line3
    gotoxy(45,12);
    printf("%c",186);
    gotoxy(75,12);
    printf("%c",186);

    //line4
    gotoxy(45,13);
    printf("%c",186);
    gotoxy(75,13);
    printf("%c",186);

    //line5
    gotoxy(45,14);
    printf("%c",186);
    gotoxy(75,14);
    printf("%c",186);

    //line
    gotoxy(45,15);
    printf("%c",200);
    for(i=0;i<29;i++)
        printf("%c",205);
    printf("%c",188);
}

void strprint (char* str)
{
    int i=0;
    for(i=0 ; str[i] ; i++)
    {
        printf("%c",str[i]);
    }
    return;

}
