include<stdio.h>
#include<conio.h>
int main()
{
 int i,c=0;   
    char a[50];
    printf("enter the sentence");
    scanf("c",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
    }
