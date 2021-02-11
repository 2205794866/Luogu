#include <stdio.h>

int main()
{
    char s[100], *p;
    scanf("%s", s);
    p = s;
    while(*p)
    {
        if(*p >= 'a' && *p <= 'z')
        *p = *p +'A' - 'a';
        p++;
    }
    printf("%s", s);
    return 0;
}