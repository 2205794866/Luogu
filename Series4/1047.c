#include<iostream>
using namespace std;
int main()
{
	int a[10002];
	int l, m, s, n, i, x;
	x = 0;
	for (int t = 0; t <= 10001; t++)
		a[t] = 1;
	cin >> l >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> s >> n;
		for (int b = s; b <= n; b++)
			a[b] = 0;
	}
	for (int z = 0; z <= l ; z++)
		if (a[z] == 1) x++;
	cout << x << endl;
	return 0;
}