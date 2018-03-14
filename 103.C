#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char str[100];
printf("enter the string");
scanf("%c",&str[i]);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>'a'&&str[i]<'z')
{
str[i]=str[i]-32;
}
if(str[i]==' ')
{
str[i]=str[i]-32;
}
}
printf("%c",str);
getch();
}
