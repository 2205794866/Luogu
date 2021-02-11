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
        for( i = 2; i<= n/2; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}


int main()
{
    int n,a[10000],i;
    scanf("%d", &n);
    for(i = 0; i<n ; i++)
    scanf("%d", &a[i]);
    for(i = 0; i<n; i++)
    {
        if(isprime(a[i]))
        printf("%d ", a[i]);
    }
    return 0;
}