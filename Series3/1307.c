#include <stdio.h>

int main()
{
    char s[20], *p,*p0;
    scanf("%s", s);
    p = s;
    if(*p == '-')
    {
        printf("%c", *p);
        p++;
    }
    p0 = p;
    while(*p)
    p++;
    p--;
    while(*p == '0')
    p--;
    while(p >= p0)
    {
        printf("%c", *p);
        p--;
    }
    if(*p0 = 0)
    printf("0");
    return 0;
    
}