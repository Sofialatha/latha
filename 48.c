#include<stdio.h>
#include<conio.h>
void main()
{
int a[40],i,sum=0,avg,n;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<+n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("avg=%d",avg);
getch();
}
