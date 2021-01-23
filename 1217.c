//TODO :: TLE

#include <stdio.h>

int is(int n)
{
    int flag = 1;
    char s[100],*p,*p0;
    p = s, p0 = s;
    while(n)
    {
        *p++ = n%10;
        n /= 10;
    }
    p--;
    while(p0 < p)
    {
        if(*p0++ != *p--)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int isprime(int n)
{
    int flag = 1,i;
    if(n == 1)
    flag = 0;
    if(n > 2)
    {
        for(i = 2; i<=n/2; i++)
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int a,b,i;
    scanf("%d%d", &a, &b);
    for(i = a; i<=b; i++)
    {
        if(i%2 && is(i) && isprime(i))
        printf("%d\n", i);
    }

    return 0;
}