#include <stdio.h>

int main()
{
    int n,x,k,i,week;
    scanf("%d", &n);
    for(k = 1; k < 1000; k++)
    for(x = 1; x <= 100; x++)
    {
        for(week = 0; week <= 52; week++ )
        for(i = 0; i < 7; i++)
        if(n == week *(7*x+ 21*k) + i*x+(i+1)/2*i)
        goto L;
    }
    L:
    printf("%d\n%d", x,k);
    return 0;
}