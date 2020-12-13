#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void jc(char *, int);

int main()
{
    char t[100];
    int n;
    scanf("%d", &n);
    jc(t, n);
    printf("%s", t);
}

void jc(char *t, int n)
{
    strcpy(t, "1");
    int i,len,j,sum;
    int a[100] = {0}, b[100] = {0};
    for(i =1; i<=n; i++)
    {
        int a[100] = {0}, b[100] = {0};
        char *p;
        p = t;
        len = 0,j = 0;
        while(*p!= '\0')
        a[len++] = *p++ - '0';
        for (; len > 0; len--)
        {
            sum = b[j] + a[len-1]*i;
            b[j++] = sum%10;
            b[j] = sum/10; 
        }
        if(!b[j])
        j--;
        p = t; 
        for(;j>=0;j--)
        *p++ = b[j] + '0';
        *p = '\0';
    }
    j = 0;
}