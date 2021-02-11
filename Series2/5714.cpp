#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double m,h,x;
	scanf("%lf%lf", &m, &h);
	x = m/h/h;
	if(x<18.5)
		printf("Underweight");
	else if(x>=18.5 && x < 24)
		printf("Normal");
	else {
		cout<<x<<endl;
		printf("Overweight");
	}
	return 0;
	
 }