#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x,y;
	cin>>x;
	if(x<=150) y=0.4463*x;
	else if(x>=151&&x<=400) y=0.4463*150+(x-150)*0.4663;
	else if(x>=401) y=0.4463*150+(400-150)*0.4663+(x-400)*0.5663;
	cout<<fixed<<setprecision(1)<<y<<endl;
	return 0;
 } 