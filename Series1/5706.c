#include <stdio.h>

int main()
{
	double t,x;
	int n,y;
	scanf("%lf%d", &t,&n);
	x = t/n;
	y = 2*n;
	printf("%.3f\n%d", x, y);
	return 0;
	
}