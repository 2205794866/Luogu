#include <stdio.h>

int main()
{
	int x,flag1 = 0, flag2 = 0;
	scanf("%d", &x);
	if(x %2 == 0)
	flag1 = 1;
	if(x>4 && x<= 12)
	flag2 = 1;
	int a,b,c,d;
	a = flag1&&flag2;
	b = flag1||flag2;
	c = (flag1 && (!flag2) || (!flag1) && flag2);
	d = !flag1 && !flag2;
	printf("%d %d %d %d", a, b, c, d );
	return 0;
}