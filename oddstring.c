#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,l;
printf("enter string");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
printf("\t");
for(i=0;i<l;i++)
{
if(i%2!=0)
{
printf("%c",a[i]);
}
}
getch();
}
