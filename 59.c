#include<stdio.h>
#include<conio.h>
void main()
{
int n;
void max(int n);
max(n);
getch();
	}
void max(int n)
{
int max,i,j,a[30];
printf("enter array size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
max=a[0];
if(a[0]<a[j])
	{
	max=a[j];
	}}}
	printf(" max %d",max);
	getch();
	}

