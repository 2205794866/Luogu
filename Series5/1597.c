#include <stdio.h>
#include <string.h>

int main()
{
    char s[300], *p;
    int ans[3] ={0};
    gets(s);
    p = s;
    while(*p)
    {
        if(*p == '=')
        {
            if(*(p+1) >= '0' && *(p+1) <= '9')
            ans[*(p-2) - 'a'] = *(p+1) - '0';
            else
            ans[*(p-2) - 'a'] = ans[*(p+1) - 'a'];
        }
        p++;

    }
    printf("%d %d %d", ans[0], ans[1], ans[2]);
    return 0;
}