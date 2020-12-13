#include <stdio.h>

int main()
{
    int n,k,i,s1 = 0,s2 = 0,t = 0, j=0;
    double x1,x2;
    scanf("%d%d", &n, &k);
    for(i = 1; i <= n; i++)
    {
        if(i % k== 0)
        {
            s1 += i;
            t++;
        }
        else
        {
            s2 += i;
            j++;
        }
    }
    x1 =1.0*s1/t;
    x2 = 1.0*s2/j;
    printf("%.1f %.1f", x1, x2);
    return 0;
}
