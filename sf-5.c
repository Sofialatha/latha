#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
printf("%d",n);
}
getch();
}
