#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n>1)
		printf("Today, I ate %d apples.", n);
	else printf("Today, I ate %d apple.", n);
	return 0;
}