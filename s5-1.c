#include<stdio.h>
int main()
{
int i,n;
char str;
printf("enter gow many times");
scanf("%d",&n);
printf("enter the string");
scanf("%s",str);
for(i=1;i<=n;i++)
{
printf("\n %s",str);
}
return 0;
}
