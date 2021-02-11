#include<iostream>
using namespace std;
int main()
{
	int i, x, n, s;
	s = 0;
	cin >> x >> n;
	for (i = x; i <= x + n-1; i++)
	{
		if (i%7!= 6 && i % 7 != 0)
			s = s + 250;
	}
	cout << s << endl;
    return 0;
}