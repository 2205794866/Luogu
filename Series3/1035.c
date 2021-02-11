#include<iostream>
using namespace std;
int main()
{
	double n,sum,k;
	sum=0;
	cin>>k;
	for(n=1;n>=1;n++)
	{
	    sum+=1/n;
		if(sum>k) 
		{
		cout<<n<<endl;
		n=-1;
		}
    }
	return 0;
}