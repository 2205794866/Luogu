#include <stdio.h>

int isprime(int n)
{
    int flag = 1, i;
    if ( n== 1 || n== 0)
    {
        flag = 0;
    }
    if( n== 2)
    {
        flag = 1;
    }
    if( n > 2)
    {
        for(i = 2; i<=n/2; i++)
        if(n % i== 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}


int main()
{
    char s[100], *p;
    int a[26] = {0},t,min,max,i;
    scanf("%s", s);
    p = s;
    while(*p)
    {
        t = *p - 'a';
        a[t]++;
        p++;
    }
    for(i = 0; i<26; i++)
    {
        if(a[i])
        {
            min = max = a[i];
            break;
        }
    }
    for(i = 0; i<26; i++)
    {
        if(a[i])
        {
            if(a[i] < min )
            min = a[i];
            if(a[i] > max)
            max = a[i];
        }
    }
    if(isprime(max - min))
    {
        printf("Lucky Word\n");
        printf("%d\n", max - min);
    }
    else
    {
        printf("No Answer\n");
        printf("0\n");
    }
    return 0;
}