//program to perform arthimetic operators

#include<stdio.h>
#include<conio.h>

void main()
{
   int x,y,addition,multiplication,subtraction,division,modulus;
    clrscr();
    x=100;
    y=200;
    addition=x+y;
    multiplication=x*y;
    subtraction=x-y;
    division=x/y;
    modulus=x%y;
    printf("addition=%d,\n multiplication=%d,\n division=%d,\n modulus=%d" ,addition,multiplication,subtraction,division,modulus);
    getch();
}