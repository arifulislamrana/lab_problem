/*
   A
  B B
 C C C
  B B
   A
 */
#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x)
{
    printf("\n");
    while(x--)
        printf("  ");
}
int main()
{
    int input;
    scanf("%d",&input);
    int num=input,i;
    num--;
    for(i=0-num;i<=num;i++)
    {
        gotoxy(abs(i));

        int len=input-abs(i),x;
        for(x=1;x<=len;x++)
        {
        printf(" %c  ",64 + len);
        }
    }
}

