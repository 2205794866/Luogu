#include <stdio.h>
#include <string.h>

int transformate( char *p , int len)
{
    int n = 0, t = 10;
    char *p0 = p;
    p = p+len-1;
    n += *p-- -'0';
    while(p >= p0)
    {
        n += (*p-- - '0') * t;
        t *= 10;
    }
    return n;
} 


int getlen(int n)
{
    int s = 0;
    if(n < 0)
    {
        s++;
        n= -n;
    }
    do
    {
        n /= 10;
        s++; 
    }while(n);
    return s;
}

int main()
{
    int flag, plus1, plus2,result, len1,len2, len3,len, i,n;
    char s[100][100], and1[100][100], and2[100][100];
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    {
        scanf("%s", s[i]);
        if(s[i][0] >= 'a' && s[i][0] <= 'c')
        scanf("%s%s", and1[i], and2[i]);
        else
        {
            strcpy(and1[i], s[i]);
            scanf("%s", and2[i]);
        }
    }
    for(i = 0; i<n; i++) 
    {
        if(s[i][0] >= 'a' && s[i][0] <= 'c')
        flag = s[i][0] - 'a';
        len1 = strlen(and1[i]);
        len2 = strlen(and2[i]);
        plus1 = transformate(and1[i], len1);
        plus2 = transformate(and2[i], len2);
        switch(flag)
        {
            case 0:
                result = plus1 +plus2;
                len3 = getlen(result);
                len = len1+len2 +len3 +2;
                printf("%d+%d=%d\n%d\n", plus1, plus2,result, len);
            break; 
            case 1:
                result = plus1 -plus2;
                len3 = getlen(result);
                len = len1+len2 +len3 +2;
                printf("%d-%d=%d\n%d\n", plus1, plus2,result, len);
            break;
            case 2:
                result = plus1 *plus2;
                len3 = getlen(result);
                len = len1+len2 +len3 +2;
                printf("%d*%d=%d\n%d\n", plus1, plus2,result, len);
            break;  
        }
    }
    return 0;

}
