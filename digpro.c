#include <stdio.h>
#include<conio.h>
void  main()
{
int r,product=1;
long int n;
    scanf("%d",&p);
    while(n!=0)
    {
        r=n%10;
        product=product*r;
        n=n/10;
    }
    printf("%d",product);

    return 0;
}
