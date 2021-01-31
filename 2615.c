#include <stdio.h>

int main()
{
    int n,a[40][40] = {0},i,j,k,x,y;
    scanf ("%d", &n);
    x = 0,y = n/2;
    a[x][y] = 1;
    for(k =2; k<=n*n; k++)
    {
        if( x== 0 && y!= n-1)
        x = n-1, y = y+1;
        else if( x != 0 && y == n-1 )
        x = x-1, y = 0;
        else if( x == 0 && y == n-1)
        x = x+1, y = y;
        else if( x != 0 && y != n-1)
        {
            if(a[x-1][y+1] == 0)
            x = x-1, y = y+1;
            else 
            x = x+1, y = y;
        }
        a[x][y] = k;
    }    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        printf("%d ", a[i][j]);
        printf("%d\n", a[i][j]);
    }
    return 0;
}