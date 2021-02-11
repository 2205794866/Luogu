#include <stdio.h>

int main()
{
	int y,flag = 0;
	scanf("%d", &y);
	if( y%4 == 0&& y%100 != 0)
		flag = 1;
		else if( y % 400 == 0)
			flag = 1;
	printf("%d", flag);
	return 0; 
}