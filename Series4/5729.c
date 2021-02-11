#include <stdio.h>

int main()
{
    int a[21][21][21],i,j,k,l,q,x,y,z,x1,y1,z1,x2,y2,z2,s;
    scanf("%d%d%d", &x,&y,&z);
    for(i = 1; i<=x; i++)
    for(j = 1; j<=y; j++)
    for(k = 1; k<=z; k++)
    a[i][j][k] = 1;
    scanf("%d", &q);

    for(l = 0; l<q; l++)
    {
        scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
        for(i = x1; i<=x2; i++)
        for(j = y1; j<=y2; j++)
        for(k = z1; k<=z2; k++)
        a[i][j][k] = 0;
    }
    s = 0;
    for(i = 1; i<=x; i++)
    for(j = 1; j<=y; j++)
    for(k = 1; k<=z; k++)
    if(a[i][j][k])
    s++;
    printf("%d", s);
    return 0;
}