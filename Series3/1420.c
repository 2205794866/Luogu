#include <stdio.h>

int main()
{
    int n,i,s,max= 1,a[10000];
    s = 1;
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    scanf("%d", &a[i]);
    for(i = 1;i < n; i++)
    {
        if(a[i] == a[i-1] +1)
            s++;
        else
        {
            if(s > max)
            max = s;
            s = 1;
        }
    }
    if(s > max)
    max = s;
    printf("%d", max);
    return 0;
}