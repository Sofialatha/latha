#include<stdio.h>
#include<conio.h>
void main()
{
int l1,l2,i;
printf("\n enter two party soldiers");
for(i=1;i<=3;i++)
{
 scanf("\n %d%d",&l1,&l2);

 if(l1>l2)
 {
 printf("\n %d",l1-l2);
 }
 else
 {
 printf("\n %d",l2-l1);
 }}
 getch();

 }
