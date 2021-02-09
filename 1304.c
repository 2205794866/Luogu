#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isprime(int n)
{
    int flag = 1,i;
    if(n < 2)
    flag = 0;
    if(n > 2)
    {
        for(i = 2; i<=n/2; i++)
        if( n %i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;

}


int main()
{
    int n,i,j;
    scanf("%d", &n);
    for( i = 4; i<=n; i=i+2)
    {
        for( j = 2; j<i; j++)
        if(isprime(j) && isprime(i-j))
        {
            printf("%d=%d+%d\n", i,j,i-j);
            break;
        }
    }
    return 0;
}