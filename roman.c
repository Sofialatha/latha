#include<stdio.h>
#include<string.h>
void main()
{	
	int t=0,n,m,i;
	char rm[9];
	scanf("%s",rm);
	m=strlen(rm);
	for(i=0;i<m;i++)
	{
	switch (rm[i])
      {
     case 'I':  
            rm[i] = 1;
            break;
     case 'V': 
            rm[i] = 5;
            break;
     case 'X': 
            rm[i] = 10;
            break;
     case 'L': 
            rm[i] = 50;
            break;
     case 'C':  
            rm[i] = 100;
            break;
     case 'D': 
            rm[i] =  500;
            break;
	 }
}
for(i=0;i<m;i=i+2)
{
		if(rm[i]<rm[i+1])
		{
			n=rm[i+1]-rm[i];
		}
		else
		{
			n=rm[i+1]+rm[i];
		}
		t=n+t;
}
printf("%d",t);
getch();
}
