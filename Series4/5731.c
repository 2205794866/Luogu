#include <stdio.h>

int main()
{
    int n,i,j, a[10][10],s,t;
    scanf("%d", &n);
    t =n;
    if(n%2)
    {
        s = 1,j = 1;
        while(t > j)
        {
            for(i = j; i<=t; i++)
            a[j][i] = s++;
            for(i = j+1; i<=t; i++)
            a[i][t] = s++;
            for(i = t-1; i>=j; i--)
            a[t][i] = s++;
            for(i = t-1; i>=j+1; i--)
            a[i][j] = s++;
            t--,j++;
        }
        a[t][j] = s;
    }
    else
    {
        s = 1, j= 1;
        while(t > j)
        {
            for(i = j; i<=t; i++)
            a[j][i] = s++;
            for(i = j+1; i<=t; i++)
            a[i][t] = s++;
            for(i = t-1; i>=j; i--)
            a[t][i] = s++;
            for(i = t-1; i>=j+1; i--)
            a[i][j] = s++;
            t--,j++;
        }
    }
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
        printf("%3d", a[i][j]);
        printf("\n");
    }
    return 0;
}