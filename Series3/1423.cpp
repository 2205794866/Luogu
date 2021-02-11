#include<iostream>
using namespace std;
int main()
{
double x,y,s;
int i;
i=0;y=0;s=2;
cin>>x;
while(y<x)
{
y+=s;
s=0.98*s;
i++;
}
cout<<i<<endl;
return 0;
}