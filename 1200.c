#include <stdio.h>
#include <string.h>


int main()
{
    char s[20],p[20],*ps,*pp;
    int s1,p1;
    scanf("%s", s);
    scanf("%s", p);
    ps =s;
    s1 = 1;
    while(*ps)
    {
        s1 *= *ps - 'A'+1;
        ps++; 
    }
    pp = p;
    p1 = 1;
    while(*pp)
    {
        p1 *= *pp - 'A'+1;
        pp++;
    }
    if(s1 % 47 == p1 % 47)
    printf("GO");
    else
    printf("STAY");
    return 0;
}