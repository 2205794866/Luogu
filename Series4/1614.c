#include <stdio.h>

int main()
{
    int n,m,i,j,a[10000],min=0, s;
    scanf("%d%d", &n, &m);
    for(i = 0; i<n; i++)
    scanf("%d", &a[i]);
    for(i =0; i<m; i++)
    min += a[i];
    for(i = 0; i<n-m; i++)
    {
        s = 0;
        for(j =0; j<m; j++)
        s += a[i+j];
        if(s < min)
        min = s;
    }
    printf("%d", min);
    return 0;
}