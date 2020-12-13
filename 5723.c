#include <stdio.h>

int main()
{
    int isprime = 1,i=0,n,s,t=2,j;
    scanf("%d", &n);
    while(n >s)
    {
        isprime = 1;
        for(j = 2; j<=t/2; j++)
        {
            if(t%j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime)
        {
            if(s+t>n)
            break;
            printf("%d\n", t);
            s+=t;
            i++;
        }
        t++;
    }
    printf("%d",i);
    return 0;
}