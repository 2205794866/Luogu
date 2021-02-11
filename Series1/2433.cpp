#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
void fc1();
void fc2();
void fc3();
void fc4();
void fc5();
void fc6();
void fc7();
void fc8();
void fc9();
void fc10();
void fc11();
void fc12();
void fc13();
void fc14();

int main()
{
	int x;
	scanf("%d", &x);
	switch(x)
	{
		case 1: fc1();break;
		case 2: fc2();break;
		case 3: fc3();break;
		case 4: fc4();break;
		case 5: fc5();break;
    	case 6: fc6();break;
	    case 7: fc7();break;
	    case 8: fc8();break;
	    case 9: fc9();break;
	    case 10: fc10();break;
	    case 11: fc11();break;
	    case 12: fc12();break;
	    case 13: fc13();break;
	    case 14: fc14();break;
	}
	return 0; 
}
void fc1()
{
	printf("I love Luogu!");
}

void fc2()
{
	int n =10,a,u,bw;
	a = 2;
	u = 4;
	bw = n - a-u;
	printf("%d %d", a+u, bw);
}

void fc3()
{
	int n =14, m = 4;
	printf("%d\n", n/m);
	printf("%d\n", n/m*m);
	printf("%d", n%m);
}

void fc4()
{
	double n = 500.0;
	int m = 3;
	printf("%.3f", n/m);
	
}

void fc5()
{
	int a = 260, b = 220;
	int va = 12, vb = 20;
	int t;
	t = (a+b)/(va+vb);
	printf("%d", t);
}

void fc6()
{
	cout << sqrt (117); 
}

void fc7()
{
	cout << "110\n90\n0";
}

void fc8()
{
    double	pai = 3.141593;
	cout << 10 * pai << endl << 25 * pai << endl << 125 * 4 / 3.0 * pai;
}

void fc9()
{
	int x, n1,n2,n3;
	for(x = 1; x<1000; x++)
	{
		n1 = x/2-1;
		n2 = n1/2-1;
		n3 = n2/2-1;
		if(n3 == 1)
		{
			printf("%d", x);
			break;
		}
	}
}

void fc10()
{
	printf("9");
}
void fc11()
{
	cout<<100.0/3;
}

void fc12()
{
	printf("%d\n", 'M' - 'A' +1);
	printf("%c", 'A' + 18-1);
}

void fc13()
{
	printf("16");
}

void fc14()
{
	printf("50");	
}