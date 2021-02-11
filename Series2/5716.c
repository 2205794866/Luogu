#include<stdio.h>

int main()
{
	int y,m,d,flag = 0;
	scanf("%d%d", &y, &m);
	if((y % 4 == 0 && y%100 !=0) || y %400 == 0)
	flag = 1;
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: d = 31; break;
		case 4:
		case 6:
		case 9:
		case 11: d = 30; break;
		case 2 : d = 28 + flag; break; 
	}
	printf("%d", d);
	return 0;

}