#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,n,a;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
a=n%10;
s=s+(a*a);
n=n/10;
}
printf("%d",s);
getch();
}
