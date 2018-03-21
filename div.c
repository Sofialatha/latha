#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int i,t,len;
printf("enter the string");
scanf("%s",&a);
len=strlen(a);
if(len%2==0)
{
for(i=0;i<1;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;

}
printf("%s",a);
}
else
{
for(i=0;i<1;i+=3)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("%s",a);
}
getch();
}
