#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[10000][4],i,j,s = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++ )
    {
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
        a[i][3] = a[i][0]+a[i][1]+a[i][2];
    }
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<i;j++)
        {
            if(abs(a[i][0] - a[j][0]) <=5 && abs(a[i][1] - a[j][1]) <=5 && abs(a[i][2] - a[j][2]) <=5 && abs(a[i][3] - a[j][3]) <=10 )
            s++;
        }
    }
    printf ("%d", s);
    return 0;
}