#include <stdio.h>

int main()
{
    int a[2000]={0}, b[2000]={0},a1, b1, i,c[2000]= {0}, m, j, k,l1=26,l2= 26;
    for(i = 0; i<26; i++)
    {
        a[i] = getchar() - '0';
        b[i] = getchar() - '0';
    }
    a1 = 26;
    b1 =26;
    i = 1;
    t = 0;
    while(a1 !=0 && b1 != 0 && i<=1000)
    {
        c[t++] = a[i];
        c[t++] = b[i];
        a1 -=1;
        b1 -=1;
        for( m = 0; m<t-1; m++)
        {
            if(c[m] == a[t])
            {
                for(j = m; j< t-1; j++)
                {   
                    a[l1++] = a[m];
                    c[m] = 0;
                }
                a1 += t-1-m;
            }
        }





    }