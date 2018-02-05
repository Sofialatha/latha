#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,t;
printf("enter two numbers");
scanf("%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d%d",a,b);
getch();
}
