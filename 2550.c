#include <stdio.h>

int main()
{
    int a[7], b[100][7], c[7] = {0}, n,i,j,k,l;
    scanf("%d", &n);
    for(i =0; i<7; i++)
    scanf("%d", &a[i]);
    for(i =0; i<n; i++)
    {
        for(j =0; j <7; j++)
        scanf("%d", &b[i][j]);
        l = 0;
        for(j =0; j<7; j++)
        for(k =0; k<7; k++)
        {
            if(a[k] == b[i][j])
            l++;
        }
        if(l)
        c[7-l]++;
    }
    for(i =0; i<7; i++)
    printf("%d ", c[i]);
    return 0;



}