#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter number");
scanf("%d",&n);
while(n%10!=0)
{
n++;
}
printf("%d",n);
getch();
}
