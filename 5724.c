#include <stdio.h>

int main()
{
    int n, a[1000],min, max,i;
    scanf("%d", &n);
    for(i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0], max = a[0];
    for(i = 0; i<n; i++)
    {
        if(a[i] <min)
        min = a[i];
        if(a[i] >max)
        max = a[i];
    }
    printf("%d", max - min);
    return 0;
}