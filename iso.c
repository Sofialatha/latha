#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i,l;
char a;

printf("enter the string");
scanf("%s",a);
for(i=0;!a[i]='\0';i++)
{
if(a[i]=a[i+1])
{
l=1;
break;
}
if(l==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();}
