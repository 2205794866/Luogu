#include <stdio.h>

int main()
{
	double a,b,d,e;
	e = 0.1;
	int c;
	scanf("%lf", &a);
	c = (int) a;
	d = a - c;
	while( c >0)
	{
		b += c%10*e;
		c /=10;
		e *=0.1;
	}
	b += d*10;
	printf("%.3f", b);
	return 0;
}