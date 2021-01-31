#include <stdio.h>
int main()
{
    int n,a[200], i, j;
    scanf("%d", &n);
    i = 0;
    a[i++] = n;
    while(n != 1)
    {
        if(n%2)
        n = n*3+1;
        else
        n = n/2;
        a[i++] = n;
    }
    for(j = i-1; j>=0; j--)
    printf("%d ", a[j]);
    return 0;
}