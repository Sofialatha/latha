#include<stdio.h>
#include<conio.h>
void main()
{
 int l,b,h;
 int tsa;
 int vol;
 printf("enter l,b,h");
 scanf("%d%d%d",&l,&b,&h);
 tsa=2((l*b)+(b*h)+(l*h));
 vol=l*b*h;
 printf("%d",tsa);
 printf("%d",vol);
 getch();
 }
