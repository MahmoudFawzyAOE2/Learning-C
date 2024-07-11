#include<stdio.h>
int get_int(int s);
void main(void)
{

    int number;

    printf("please 7 digits:");
    number=get_int(7);
    printf("\n number = %d",number);

}

int get_int(int s)
{
    int counter=0;
    char ch;
    int number=0;


    while((ch=getch()) !=13)
          {
              switch (ch)
                  {
                  case '0':
                  case '1':
                  case '2':
                  case '3':
                  case '4':
                  case '5':
                  case '6':
                  case '7':
                  case '8':
                  case '9':
                    if (counter<s)
                    {
                            printf("%c",ch);
                            number=number*10+ch-'0';
                            counter++;
                    }

                    break;
                  case '\b':
                      if(counter>0)
                      {
                          printf("\b \b");
                          number= number/10;
                          counter--;
                      }
                      break;
                  case -32:
                    ch=getch();
                    if (ch==75)
                        printf("\b");
                    break;
                  default:
                    break;
                  }
          }
    return number;
}
