//program to run a code on conditional operators.

#include<stdio.h>
#include<conio.h>

void main()
{
  int a;
  clrscr();
  printf("enter a value");
  scanf("%d",&a);
  (a % 2 == 0) ? printf("a is divisible by 2\n"):printf("a is not divisible by 2\n");
  getch();
}
