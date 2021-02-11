#include <stdio.h>

int main()
{
	int m,t,s;
	int x;
	scanf("%d%d%d", &m, &t, &s);
	if( t == 0)
	printf("0");
	else 
	{	
		if(s%t == 0)
		{	
		x = m-s/t;
		if( x >=0)
		printf("%d", x);
		else printf("0");
		}
		else 
		{
			x = m-s/t-1;
			if(x >=0)
			printf("%d", x);
			else printf("0");
		}
	}
	return 0;
 }