#include<iostream>
using namespace std;
int main()
{
	int x,y,z,a,max,day;
	max=0;
	for(z=1;z<=7;z++)
	{
		cin>>x>>y;
		a=x+y;
		if(a>=8&&a>max)
		{max=a; day=z;}
    }
    if(max==0) day=0;
	cout<<day<<endl;
	return 0;
 } 