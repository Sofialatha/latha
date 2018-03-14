
#include<stdio.h>
#include<conio.h> 
void main() {
   int a[30], i,  small;
   printf("enter limit");
   scanf("%d",&l);
   printf("enter numbers");
   for (i = 0; i < 1; i++)
   {
   scanf("%d", &a[i]);
   }
   small = a[0];
   for (i = 0; i < 10; i++) 
   {
      if (a[i] < small)
      {
         small = a[i];
      }
   }
   printf(" %d", small);
   return (0);
}
