#include <stdio.h>

int main()
{
    int n,a[100],i,j,k,s = 0,b[100];
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for(i = 0; i<n; i++)
    for(j = 0; j<i; j++)
    {
        for(k = 0; k<n; k++)
        if(b[k] == a[i]+a[j])
        {
            b[k] = 0;
            s++;
        }
    }
    printf("%d", s);
    return 0;
}