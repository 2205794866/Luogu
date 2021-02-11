#include <stdio.h>

int search(char *p)
{
    int n = 0;
    while(*p)
    {
        if(*p == 'V' && *(p+1) == 'K')
        n++;
        p++;
    }
    return n;
}

int main()
{
    int n,max,t,i;
    char s[100];
    scanf("%d%s",&n, s);
    max = search(s);
    for(i = 0; i<n; i++)
    {
        if(s[i] == 'V')
        s[i] = 'K';
        else
        s[i] = 'V';
        t = search(s);
        if(t > max)
        max = t;
        if(s[i] == 'V')
        s[i] = 'K';
        else
        s[i] = 'V';
    }
    printf("%d", max);
    return 0;
}