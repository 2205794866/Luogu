#include <stdio.h>

int isprime(int n)
{
    int i,flag = 1;
    if(n == 2)
    flag = 1;
    if(n == 1)
    flag = 0;
    if(n >2)
    {
        for(i = 2; i<= n/2; i++)
        {
            if(n % i== 0)
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
    int n,i,s= 0, a[200],j,flag= 0;
    scanf ("%d", &n);
    if(n == 1)
    printf("1");
    else
    {    
        a[s++]= 1;
        a[s++]= 2;
        for(i = 3; i <= n; i= i+2)
        {
            if(isprime(i))
                a[s++]= i;
        }
        for(i = s; i > 0; i--)
        {
            for(j = 0; j <= i; j++)
            {
                if(a[i] * a[j] == n)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
            break;
        }
        printf("%d", a[i]);
    }
    return 0;

}