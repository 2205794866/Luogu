#include <stdio.h>

int main()
{
    int a[100],s=0,i;
    while(1)
    {
        scanf("%d", &a[s]);
        if(a[s++] == 0)
        break;
    }
    for(i = s-2; i>=0; i--)
    printf("%d ", a[i]);
    return 0;
}