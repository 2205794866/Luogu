#include <stdio.h>

int main()
{
    int n,i,j,t;
    scanf("%d", &n);
    t = 1;
    for(i = 0; i <n; i++)
    {
        for(j = 0; j <n; j++)
        printf("%02d", t++);
        printf("\n");
    }
    printf("\n");
    t = 1;
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n-i-1; j++)
        printf("  ");
        for(j = 0; j<i+1; j++)
        printf("%02d", t++);
        printf("\n");
    }
    return 0;
}