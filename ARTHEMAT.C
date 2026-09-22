//program to perform arthimetic operators

#include<stdio.h>
#include<conio.h>
int main(void)
{
   int x,y,add,mult,subt,divi,modu;
    clrscr();
    x=100;
    y=200;
    add=x+y;
    mult=x*y;
    subt=x-y;
    divi=x/y;
    modu=x%y;
    printf("add=%d,\n mult=%d,\n subt=%d,\n divi=%d,\n modu=%d" ,add,mult,subt,divi,modu);
    getch();
    return 0;
}