/program to run relational operators.

#include<stdio.h>
#include<conio.h>

void main()
{
  int x=2;
  clrscr();
  if(x>0)
  printf("x is greater\n");
  else
  printf("x is not greater\n");

  if(x<0)
  printf("x is smaller\n");
  else
  printf("x is not smaller\n");

  if(x>=0)
  printf("x is greaterequal\n");
  else
  printf("x is not greaterequal\n");

  if(x<=0)
  printf("x is smallerequal\n");
  else
  printf("x is not smallerequal\n");

  if(x==0)
  printf("x is comparable\n");
  else
  printf("x is not comparable\n");

  getch();
}