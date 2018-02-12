#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,sum=0;
printf("enter the array size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
getch();
}
