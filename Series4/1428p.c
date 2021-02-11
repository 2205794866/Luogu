#include <stdio.h>

int main()
{
    int i,j,n,a[100], b[100] = {0};
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        for(j = 0; j<i; j++)
        {
            if(a[j] < a[i])
            b[i]++;
        }
    }
    for(i = 0 ; i<n; i++)
    printf("%d ", b[i]);
    return 0;

}