//TODO: too high
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void plus(char *s,char*t);
char *jc(int n);
int main()
{
    int n,i;
    char s[200] = "0";
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        plus(s, jc(i));
    }
    printf("%s", s);
}


void plus(char *s, char *t)
{
    int an1[200] = {0}, an2[200] = {0},len1=0, len2 = 0, i =0,c[200] = {0},n,j;
    char *p = s;
    while(*p != '\0')
    an1[len1++] = *p++ - '0';
    p = t;
    while(*p != '\0')
    an2[len2++] = *p++ - '0';
    if(len1 > len2)
    {
        for(j = 0; j<len1-len2;j++)
        {
            n = c[j] + an1[len1 - j-1] + an2[len2-j-1];
            c[j] = n%10;
            c[j+1] = n/10;
        }
        for(;len1-j>0;j++)
        {
            n = c[j] +an1[len1- j-1];
            c[j] = n%10;
            c[j+1] = n/10;
        }
    }
    else if(len1 < len2)
    {
        for(j = 0; j<len2-len1;j++)
        {
            n = c[j] + an1[len1 - j-1] + an2[len2-j-1];
            c[j] = n%10;
            c[j+1] = n/10;
        }
        for(;len2-j>0;j++)
        {
            n = c[j] +an2[len2- j-1];
            c[j] = n%10;
            c[j+1] = n/10;
        }
    }
    else 
        for(j = 0; j<len1;j++)
        {
            n = c[j] + an1[len1 - j-1] + an2[len2-j-1];
            c[j] = n%10;
            c[j+1] = n/10;
        }
    p = s;
    if(!c[j])
    j--;
    for(;j>=0;j--)
    *p++ = c[j] + '0';
    *p = '\0';


}
char *jc(int m)
{
    int i =1;
    char *s;
    s = (char*)malloc(200);
    strcpy(s, "1");
    char *p;
    for(i = 1;i<=m;i++)
    {
        p = s;
        int a[200],b[200]= {0},j= 0,n= 0,k=0;
        while(*p != '\0')
        a[j++] = *p++-'0';
        int *t = &a[j-1];
        for(;j>0;j--)
        {
            n = (*t--) * i + b[k];
            b[k++] = n%10;
            b[k] = n/10;
        }
        p = s;
        if(!b[k])
        k--;
        for(;k>=0;k--)
        *p++ = b[k] + '0';
        *p = '\0';
    }
    return s;
}

