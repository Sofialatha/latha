#include<stdio.h>
#include<string.h>
int main()
{
   char a[50],b[50];
   printf("Enter the string");
   scanf("%s",a);
   strcpy(b,a);
   strrev(b);
   if(strcmp(a,b)==0)
   {
   printf("palindrom");
   }
   else
   {
   printf("Not palindrom");
   }
   return(0);
}
