#include<iostream>
using namespace std;
int main()
{
	int a[10], i, x, s;
	for (i = 0; i <= 9; i++)
		cin >> a[i];
	cin >> x;
	s = 0;
	for (i = 0; i <= 9; i++)
		if (a[i] <= x + 30) s++;
	cout << s << endl;
	return 0;
}