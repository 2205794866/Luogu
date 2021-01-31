#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,k,a[10000] = {0},flag = 0;
    char *p,b[10000];
    scanf("%s", b);
    p = b, j = 0;
    n = strlen(p);
    while(*p)
    {
        while(*p == flag + '0')
        {
            a[j]++;
            p++;
        }
        if(*p)
        {
            flag = !flag;
            j++;
        }
    }
    for( i =1; i<n; i++)
    {
        scanf("%s", b);
        p = b;
        while(*p)
        {
            while(*p == flag + '0')
            {
                a[j]++;
                p++;
            }
            if(*p)
            {
                flag = !flag;
                j++;
            }
        }        
    }
    printf("%d ", n);
    for(i = 0; i<=j; i++)
    printf("%d ", a[i]);


    return 0;
}