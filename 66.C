#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
if(n==0)
{
printf("invalid");
}
else if(n==1)
{
printf("neither prime nor composite");
}
else
{
for(i=2;i<=n;i++)
{
if(n%i==0&n!=i)
{
printf(" not prime number");
}
else if(n%i==0 & n=i)
{
printf("prime");
} }}
getch();
}
