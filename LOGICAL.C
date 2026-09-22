//program to run a code based on logical operators.

#include<stdio.h>
#include<conio.h>

void main()
{
  int v;
  clrscr();
  printf("enter value\n");
  scanf("%d",&v);
  if(v>=8 && v<=8)
  printf("v is great\n");
  else
  printf("v is small\n");

  if(v>=8 || v<=8)
  printf("v is great\n");
  else
  printf("v is small\n");

  if(!(v==8))
  printf("v is eight\n");
  else
  printf("v is not eight\n");
  getch();
}