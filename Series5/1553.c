#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * func1(char *p)
{
    char s[100],*ps,*pt,*ret,temp;
    int len = strlen(p);
    strcpy(s, p);
    pt = s+len - 1;
    ps = s;
    while(ps<pt)
    {
        temp = *ps;
        *ps = *pt;
        *pt = temp;
        ps++,pt--;
    }
    ps = s;
    while(*ps == '0' && *(ps+1))
    {
        ps++;
    }
    ret = (char *)malloc(strlen(ps) +1);
    strcpy(ret, ps);
    return ret;
}

char *func2(char *p)
{
    int len = strlen(p);
    char s[100],*pt,*ps,temp,*ret;
    strcpy(s, p);
    pt = s;
    ps = s;
    while(*(pt +1) != '.')
    pt++;
    while(ps < pt)
    {
        temp = *ps;
        *ps = *pt;
        *pt = temp;
        ps++,pt--;
    }
    ps = s;
    pt = s+len-1;
    while(*ps++ !=  '.');
    while(ps < pt)
    {
        temp = *ps;
        *ps = *pt;
        *pt = temp;
        ps++,pt--;
    }
    ps = s,pt = s+len-1;
    while(*ps == '0' && *(ps+1) != '.')
    ps++;
    while(*pt == '0' && *(pt-1) != '.')
    pt--;
    *(pt+1) = '\0';
    ret = (char *)malloc(strlen(ps));
    strcpy(ret, ps);
    return ret;
}

char *func3(char *p)
{
    int len = strlen(p),a;
    char s[100],*pt,*ps,temp,*ret;
    strcpy(s, p);
    pt = s;
    ps = s;
    while(*(pt +1) != '/')
    pt++;
    while(ps < pt)
    {
        temp = *ps;
        *ps = *pt;
        *pt = temp;
        ps++,pt--;
    }
    ps = s;
    pt = s+len-1;
    while(*ps++ !=  '/');
    while(ps < pt)
    {
        temp = *ps;
        *ps = *pt;
        *pt = temp;
        ps++,pt--;
    }
    ps = s;
    while(*ps == '0' && *(ps+1) != '/')
    ps++;
    pt = ps;
    a = 0;
    while(*pt++ != '/');
    while(*pt == '0')
    pt++,a++;
    while(*(pt-1) != '\0')
    {
        *(pt-a) = *pt;
        pt++;
    }
    ret = (char *)malloc(strlen(ps));
    strcpy(ret, ps);
    return ret;    
}

char *func4(char *p)
{
    char s[100],*ps,*pt,*ret,temp;
    int len = strlen(p);
    strcpy(s, p);
    pt = s+len - 2;
    ps = s;
    while(ps<pt)
    {
        temp = *ps;
        *ps = *pt;
        *pt = temp;
        ps++,pt--;
    }
    ps = s;
    while(*ps == '0' && *(ps+1) != '%')
    {
        ps++;
    }
    ret = (char *)malloc(strlen(ps) +1);
    strcpy(ret, ps);
    return ret;  
}

int main()
{
    int flag = 1;
    char s[100],*p;
    scanf("%s", s);
    p = s;
    while(*p)
    {
        if(*p == '.')
        {
            flag = 2;
            break;
        }
        if(*p == '/')
        {
            flag = 3;
            break;
        }
        if(*p == '%')
        {
            flag = 4;
            break;
        }
        p++;
    }
    switch(flag)
    {
        case 1:p = func1(s);break;
        case 2:p = func2(s);break;
        case 3:p = func3(s);break;
        case 4:p = func4(s);break; 
    }
    printf("%s", p);
    return 0;
}