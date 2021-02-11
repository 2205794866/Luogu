#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[200000000],c,*p;
    int t,i,win[10000] = {0},lose[100000] = {0};
    p = s;
    while((c = getchar()) != 'E')
    {
        if(c == 'W' || c == 'L')
        *p++ = c;
    }
    *p = '\0';
    p  = s;
    t = 0;
    while(*p)
    {
        if( *p == 'W')
        win[t]++;
        else
        lose[t] ++;
        if((win[t] >= 11 || lose[t] >= 11) && abs(win[t] - lose[t]) >= 2)
        {
            printf("%d:%d\n",win[t], lose[t]);
            t++;
        }
        p++;
    }
    if(win[t] || lose[t] || (win[t] == 0 && lose[t] == 0))
    printf("%d:%d\n\n",win[t],lose[t]);
    p = s;
    t ++;
    while(*p)
    {
        if( *p == 'W')
        win[t]++;
        else
        lose[t] ++;
        if((win[t] >= 21 || lose[t] >= 21) && abs(win[t] - lose[t]) >= 2)
        {
            printf("%d:%d\n",win[t], lose[t]);
            t++;
        }
        p++;
    }
    if (win[t] || lose[t] || win[t] == 0 && lose[t] == 0)
    printf("%d:%d",win[t],lose[t]);

    return 0;
}