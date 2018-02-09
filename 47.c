#include<stdio.h>
#include<conio.h>
void main()
{
int l,h,n,s,a[40],i;
printf("enter the array size");
scanf("%d",&s);
printf("enter the elements");
for(i=0;i<=s;i++)
{
scanf("%d",&a[i]);
}
a[0]=l;
a[0]=h;
if(a[i]<l)
{
l=a[i];
}
elseif(a[i]>h)
{
h=a[i];
}
printf("largest%d",l);
printf("smallest%d",h);
getch();
}
