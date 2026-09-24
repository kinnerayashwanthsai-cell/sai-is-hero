//programm on biggest of three numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
 int K,Y,s;
 clrscr();
 printf("Enter three  numbers.\n");
 scanf("%d%d%d",&K,&Y,&s);

 if(K>Y)
 {
 if(K>s)
 printf("%d is the greater.\n",K);
 else
 {
   printf("%d is the greater.\n",Y);
 }
 }
 else
 {
 if(Y>s)
 {
 printf("%d is the greater.\n",Y);
 }
 else
 {
 printf("%d is the greater.\n",s);
 }
 }

 getch();
 }