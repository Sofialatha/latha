#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,sum=0;
printf("enter n.of elements");
scanf("%d",&a);
printf("enter strting elements");
scanf("%d",&b);
printf("enter diff");
scanf("%d",&c);
for(i=0;i<a;i++)
{
sum=sum+b;
b=b+c;
}
printf("%d",sum);
getch();
}
