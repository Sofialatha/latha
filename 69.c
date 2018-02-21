#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter a,b");
scanf("%d%d",&a,&b);
if(a<b)
{
c=b-a;
}
else
{
c=a-b;
}
if(c%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
