#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,mul;
printf("\n enter a,b");
scanf("%d%d",&a,&b);
mul=(a>b)?a:b;
if(mul%a==0&&mul%b==0)
{
printf("%d",a,b,mul);
}
getch();
}
