include<stdio.h>
void main()
{
    int l=1,m=0,i,n;
    printf("enter the nos\n");
    scanf("%d",&n);
    printf("%d %d",l,m);
    for(i=2;i<=n;i++)
    {
    n=l+m;
    m=l;
    l=n;
    printf(" %d",l);
}
