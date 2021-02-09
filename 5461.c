#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


 int a[1234][1234];
int main()
{
    int n,i,j;
    scanf("%d", &n);
    n = (1<<n);
    a[0][n+1] = 1;
    for( i = 1; i<=n; i++)
    {
        for( j = 1; j<=n; j++)
        {
            a[i][j] = a[i-1][j] ^ a[i-1][j+1];
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    return 0;
}