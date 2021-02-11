#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,m,i,j;
    char s[120][120],t[120][120];
    scanf("%d%d", &n, &m);
    for(i = 0; i<n; i++)
    {
        scanf("%s", s[i]);
    }
    for(i = 0; i<=n+1; i++)
    for(j = 0; j<=m+1; j++)
    t[i][j] = '0';
    for(i = 0; i<n ; i++)
    for(j = 0; j<m ; j++)
    {
        if(s[i][j] == '*')
        {
            t[i+1][j+1] = '*';
        }
    }
    for(i = 1; i<=n; i++)
    for(j = 1; j<=m; j++)
    {
        if(t[i][j] == '*')
        {
            if(t[i-1][j-1] >= '0' && t[i-1][j-1] <= '9')
            t[i-1][j-1]++;
            if(t[i-1][j] >= '0' && t[i-1][j] <= '9')
            t[i-1][j]++;
            if(t[i-1][j+1] >= '0' && t[i-1][j+1] <= '9')
            t[i-1][j+1]++;
            if(t[i][j-1] >= '0' && t[i][j-1] <= '9')
            t[i][j-1]++;
            if(t[i][j+1] >= '0' && t[i][j+1] <= '9')
            t[i][j+1]++;
            if(t[i+1][j-1] >= '0' && t[i+1][j-1] <= '9')
            t[i+1][j-1]++;
            if(t[i+1][j] >= '0' && t[i+1][j] <= '9')
            t[i+1][j]++;
            if(t[i+1][j+1] >= '0' && t[i+1][j+1] <= '9')
            t[i+1][j+1]++;
        }
    }
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=m; j++)
        printf("%c", t[i][j]);
        printf("\n");
    }
    return 0;

}