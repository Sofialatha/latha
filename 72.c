#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number");
scanf("%d",&a);
printf("enter the limits");
scanf("%d%d",&b,&c);
if(a>b&&a<c)
{
printf("number is present ");
}
else
{
printf("not present");
}
return 0;
}
