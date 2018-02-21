#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter the a,b");
scanf("%s%s",&a,&b);
a=a^b;
b=b^a;
a=a^b;
printf("%d%d",a,b);
getch();
}
