#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,sum=0;
printf("enter gow many digits");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);

getch();
}
