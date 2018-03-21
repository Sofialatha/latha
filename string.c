#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
printf("enter the string");
scanf("%s",&str);
printf("%s",strcat(str,"."));
getch();
}
