#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int n,l,i;
printf("enter string");
scanf("%s",a);
printf("enter number");
scanf("%d",&n);
l=strlen(a);
for(i=n;i<l;i++)
{
printf("%c",a[i]);
}
getch();
}
