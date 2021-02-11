#include <stdio.h>

int main()
{
    int s[10] = {0},i,a,b, n,t;
    scanf("%d%d", &a, &b);
    for(i = a;i <= b; i++)
    {
        n = i;
        while(n)
        {
            t = n%10;
            s[t]++;
            n /= 10;
        }
    }
    for(i =0; i<=9; i++)
    printf("%d ",s[i]);
    return 0;
}