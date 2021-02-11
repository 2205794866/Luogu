#include <stdio.h>

int isprime(int n)
{
    int flag = 1,i;
    if(n > 2)
    {
        for(i = 2; i<=n/2; i++)
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n,s,i,t,a[10000];
    s = 0,t = 0, i =2;
    scanf("%d", &n);
    do
    {
        if(isprime(i))
        {
            s+= i;
            a[t++] = i;
        }
        if(s >n)
        break;
        i++; 
    } while (1);
    for(i = 0; i< t-1; i++)
    printf("%d\n", a[i]);
    printf("%d", t-1);
    return 0;
    
}