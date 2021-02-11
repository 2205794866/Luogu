#include <stdio.h>

int main()
{
    int n,i;
    double s,a= 0.0,b = 1.0;
    scanf("%d", &n);
    for(i = 0;i<n-1; i++)
    {
        s = a+b;
        a = b;
        b = s;
    }
    printf("%.2f", s);
    return 0;
    
}