#include <stdio.h>

int main()
{   
    int n;
    unsigned char s[100], *p;
    scanf("%d%s", &n, s);
    p = s;
    while(*p)
    {
        *p = *p + n;
        while(*p > 'z')
        {
            *p = *p + 'a' - 'z' -1;
        }
        p++;
    }
    printf("%s", s);
    return 0;
}