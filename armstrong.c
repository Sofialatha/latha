#include<stdio.h>
int main()
{
int num,orignum,remainder,result=0;
printf("enter the number");
scanf("%d",&num);
orignum=num;
while(orignum!=0)
{
remainder=orignum%=10;
result+=reamainder*remainder*remainder;
orignum%=10;
}
if(result==num)
{
printf("armstrong number")
{
else
{
printf("
not armstrong number");
}
}
result
}
