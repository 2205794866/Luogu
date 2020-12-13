#include <stdio.h>


int main()
{
    int n,i,j,t=1;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n-i; j++)
        {
            printf("%02d", t++);
        }
        printf("\n");
    }
    return 0;

}