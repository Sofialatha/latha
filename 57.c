#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
void main()
{
int a,b;
printf("enter 2 integers");
scanf("%d%d",&a,&b);
swap(a,b);
getch();
}
 void swap(int a,int b)
 {
 int t;
 t=a;
 a=b;
 b=t;
 printf("result=%d\n%d",a,b);
 getch();
 }
