#include <stdio.h>

int main()
{
    int n,m,k,a[1000],b[1000],i,j,l,c[100][100], s;
    scanf("%d%d%d", &n, &m, &k); 
    for(i = 1; i<=n; i++)
    for(j = 1; j<=n; j++)
    c[i][j] = 1;
    for(i = 0 ; i<m; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        for(j = -2; j<=2; j++)
        {
            if(b[i] +j >=1 && b[i] + j <= n)
            c[a[i]][b[i]+j] = 0;
        }
        for(j = -1; j<=1; j++)
        {
            if(b[i] +j >=1 && b[i]+j <= n && a[i] -1 >=1)
            c[a[i]-1][b[i] +j] = 0;
        }
        for(j = -1; j<=1; j++)
        {
            if(b[i] +j >=1 && b[i] +j <= n && a[i]+1 <=n)
            c[a[i]+1][b[i] + j] = 0;
        }
        for(j = -2; j<=2; j++)
        {
            if(a[i] +j >=1 && a[i] + j<=n)
            c[a[i] + j][b[i]] = 0;
        }
    }
    for(; i<k+m; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        for(j = -2; j<=2; j++)
        for(l = -2; l<=2; l++)
        if(a[i] +j >= 1 && a[i] + j<=n && b[i] +l>=1 && b[i] +l <=n)
        c[a[i]+j][b[i]+l] = 0;
    }
    s = 0;
    for(i = 1; i<=n; i++)
    for(j = 1; j<=n; j++)
    if(c[i][j])
    s++;
    printf("%d", s);
    return 0;
}