#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x,e,f;
    cin>>a>>b>>c>>d;
    x=(c*60+d)-(a*60+b);
    e=x/60,f=x%60;
    cout<<e<<" "<<f<<endl;
    return 0;
}