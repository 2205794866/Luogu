#include <stdio.h>

int main()
{
    char s[300], *p;
    int boy = 0,girl = 0;
    scanf("%s", s);
    p = s;
    while(*p)
    {
        if(*p == 'b' || *(p+1)== 'o' || *(p+2) == 'y')
        boy++;
        if(*p == 'g' || *(p+1) == 'i'|| *(p+2) == 'r' || *(p+3) == 'l')
        girl++;
        p++;
    }
    printf("%d\n%d", boy, girl);
    return 0;
}