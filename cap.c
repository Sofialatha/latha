#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
int x,y,i;
printf("enter the string");
scanf("%s",&str);
x=str[0];
if(x>91)
{
y=x-32;
str[0]=y;

}
for(i=1;str[i]!='\0';i++);
{
if(str[i]==' ')
{
x=str[i+1];
if(x>91)
{
y=x-32;
str[i+1]=y;
}
}
}

printf("%s",str);
getch();
}
