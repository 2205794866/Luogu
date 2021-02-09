//TODO : cin？
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


using namespace std;
int main()
{
    int a[1000],t = 0,i,n,s;
    char c;
    while(cin >> a[t++]);
    s = 0;
    for(i = 0; i<t; i++)
    s += a[i]; 
    n = 1<<(t-1);
    s *= n;
    printf("%d", s);
    return 0;



}