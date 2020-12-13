#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void plus(char *s,char *t);
int main()
{
    char s[100] = "12";
    plus(s, "12");
    printf("%s",s);
    return 0;
}

void plus(char *s, char *t)
{
    int an1[100] = {0}, an2[100] = {0},len1=0, len2 = 0, i =0,c[100] = {0},n,j;
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
