#include <stdio.h>

int main()
{
    int n,t[5000],i,b[2000000] = {0},s,j;
    double a[5000];
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    scanf("%lf%d", &a[i], &t[i]);
    for(i =0; i<n; i++)
    {
        for(j = 1; j <= t[i]; j++)
        {
            s = (int) (a[i] *j);
            b[s] = !b[s];
        }
    }
    i = 1;
    while(1)
    {
        if(b[i++])
        break;
    }
    printf("%d", i-1);
    return 0;
}