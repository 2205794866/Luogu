#include <stdio.h>
#include <string.h>

int main()
{
    int n= 0,len,flag = 1;
    char s[1000000], t[100],*pt, *ps, *ps0;
    gets(t);
    pt = t;
    while(*pt)
    {
        if(*pt >= 'a' && *pt <= 'z')
        *pt += 'A' - 'a';
        pt++;
    }
    gets(s);
    ps = s;
    while(*ps)
    {
        if(*ps >= 'a' && *ps <= 'z')
        *ps += 'A' - 'a';
        ps++;
    }
    ps = s;
    pt = t;
    while(1)
    {
        ps0 = ps;
        while(*ps != ' ' && *ps != '\0')
        ps++;
        if(*ps == ' ')
        {
            *ps = '\0';
            if(!strcmp(ps0,pt))
            {
                n++;
                if(flag)
                {
                    len = ps0-s;
                    flag = 0;
                }
            }
            ps = ps+1;
        }
        else
        {
            if(!strcmp(ps0,pt))
            {
                n++;
                if(flag)
                {
                    len = ps0-s;
                    flag = 0;
                }
            }
            break;
        }
    }
    if(n)
        printf("%d %d", n, len);
    else
        printf("-1");
    return 0;
}