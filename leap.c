#include<stdio.h>
int main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("not leap year");
}
else
{
printf("leap year");
}
return 0;
}
