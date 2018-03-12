#include <stdio.h>
#incluude<conio.h>
void main()
{
	int n,k,a[10],i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[k-1]);
	getch();
}
