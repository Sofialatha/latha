#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c,d;
printf("enter the number");
scanf("%d",&n);
a=n/100;
b=n%100;
c=b/10;
d=b%10;
printf("%d\n%d\n%d",a,c,d);
getch();
}
