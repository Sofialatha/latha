include <stdio.h>
#include<conio.h>

void mai()
{
	char a[20];
	int l,i;
	scanf("%s",a);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}
