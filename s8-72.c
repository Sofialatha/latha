#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int m,i,flag;
printf("enter the string");
scanf("%c",&str);
m=strlen(str);
for(i=0;i<m;i++)
{
if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u')
{
flag=1;
}
if(flag==1)
{
printf("yes");

}
else
{
printf("no");
} }
return 0;
}
