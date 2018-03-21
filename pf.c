#include<stdio.h>
#include<conio.h>
void main()
{
int a,z,i,j,flag=0,count=0;
printf("enter 2 limits");
scanf("%d%d",&a,&z);
for(i=a;i<=z;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
}
else
{
flag=0;
}
if(flag==0)
{
count=count+1;
}
}
}
printf("%d",count);
getch();
}
