#include <stdio.h>
#include <string.h>

#define N 4

int main()
{
    int a[26] = {0}, i,max,j;
    char s[N][400],*p;
    for( i = 0; i<N ; i++)
    gets(s[i]);

    for( i = 0; i<N; i++)
    {
        p = s[i];
        while(*p)
        {
            if(*p >= 'A' && *p <= 'Z');
            a[*p - 'A']++;
            p++;
        }
    }
    max = 0;
    for(i = 0; i<26; i++)
    if(a[i] > max)
    max = a[i];
    for(i = max; i>= 1; i--)
    {
        for(j = 0; j<26; j++)
        {
            if(a[j] >= i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    for(j = 0; j<26; j++)
    printf("%c ", 'A'+j);
    return 0;
}