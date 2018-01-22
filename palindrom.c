#include<stdio.h>
int main()
{
int n,rev int=0,remainder,orig int;
printf("enter the integer");
scanf("%d",&n);
orig int=n;
while(n!=0)
{
remainder=n%10;
rev int=rev int*10=remainder;
n\=10;
if(orig int==rev int)
{
printf("palindrom");
}
else
{
printf("not palindrom");
return 0;
}
