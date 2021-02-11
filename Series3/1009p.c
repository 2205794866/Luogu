#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *plus(char *and1, char *and2)
{
    char s[200],*p;
    int a[200]={0}, b[200]={0},c[200] = {0},len1,len2,i,*ta, *tb,*tc,len,n ;
    len1 = strlen(and1);
    len2 = strlen(and2);
    for(i=0; i<len1 ;i++)
    a[i] = *(and1 + len1 -i-1) - '0';
    for(i = 0; i<len2; i++)
    b[i] = *(and2 + len2 -i-1) - '0';
    ta = a,tb = b,tc = c,p = s;
    len = (len1 >= len2 ? len1 :len2);
    for(i = 0; i<len; i++)
    {
        n = *ta++ + *tb++ + *tc;
        *tc++ = n%10;
        *tc = n/10;
    }
    if(!*tc)
    tc--;
    while(tc >= c)
    *p++ = *tc-- + '0';
    *p = '\0';
    p = s;
    return p;
}

char *jc( int n)
{
    //初始化
    char s[201], *p;
    int i,j;
    //累加
    int a[200]= {1},*ta,*ta0;
    for(i = 1; i<=n;i++)
    {
        int b[200] = {0},*tb,*tb0,l=0;
        ta = a, tb = b,ta0 = &a[199];
        while(!*ta0)
        ta0--;
        while(ta <= ta0)
        {
            tb0 = tb;
            l = *ta++ *i;
            tb++;
            while(l)
            {
                *tb0 += l%10;
                *(tb0+1) += *tb0 / 10;
                *tb0++ %= 10;
                l /= 10;
            }
        }
        for(j = 0; j<200; j++)
        {
            a[j] = b[j];
        }
    }
    ta = &a[199];
    while(!*ta)
    ta--;
    p = s;
    while(ta>=a)
    *p++ = *ta-- + '0';
    *p = '\0';
    p  = s;
    return p; 
}


int main()
{
    char s[201]= "0",t[200];
    int n,i,j,k;
    scanf("%d", &n);
    for(i = 1; i <=n ;i++)
    {
        strcpy(t, jc(i));
        strcpy(s,plus(s,t));
    }
    printf("%s", s);
}
