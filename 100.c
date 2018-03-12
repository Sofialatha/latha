#include<stdio.h.
#include<conio.h>
void mcin()
{
int a[20],n;
printf("enter how manu num");
scanf("%d",&n);
for(i=1;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
}
}
getch();
}
