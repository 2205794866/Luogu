#include<iostream>
using namespace std;
int main()
{
int n,i,a,x,s;
cin>>n>>x;
s=0;
for(i=1;i<=n;i++)
{
a=i;
while(a>0)
{
if(a%10==x)
s++;
a/=10;
}
}
cout<<s<<endl;
return 0;
}