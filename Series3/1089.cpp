#include<iostream>
using namespace std;
int main()
{
	int x,y,n,m,a,month;
	y=0,m=0,a=0;
	for(month=1;month<=12;month++)
	{
		cin>>x;
		y=y+300-x;
		if(y<0&&a==0)
		a=-month;
		else if(y>=100)
		{
		n=(y/100)*100; y=y-100*(y/100);
		m+=n;
	    }
	}
	if(a<0) cout<<a<<endl;
	else cout<<y+m*(1+0.2)<<endl;
	return 0;
 } 