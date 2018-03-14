#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,a[10];
scanf("%d%d",&n,&k);
printf("enter numbers");
scanf("%d",&n);
for(i=1;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[i]==k)
{
printf("yes");
}
else
{
printf("no");
}
}
getch();
}
