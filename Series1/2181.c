#include <stdio.h>

int main()
{
	unsigned long long n;
	scanf("%lld", &n);
	printf("%lld", n*(n-1)/2*(n-2)/3*(n-3)/4);
	return 0;
}