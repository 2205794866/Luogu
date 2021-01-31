#include <stdio.h>

int main()
{
    int n,a[40000],s = 0,t,*p,flag = 1,i,j;
    scanf ("%d", &n);
    p = a;
    while(s < n*n)
    {
        scanf("%d", &t);
        s += t;
        flag = !flag;
        for(i = 0; i<t; i++)
        *p++ = flag;
    }
    p = a;
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        printf("%d", *p++);
        printf("\n");
    }
    return 0;
}