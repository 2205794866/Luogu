#include <stdio.h>

int main()
{
    int a,b,c,i;
    char A[4];
    scanf("%d%d%d", &a,&b,&c);
    getchar();
    scanf("%s", A);
    int d[3];
    d[2] = a, d[0] = c, d[1] = b;
    if( b > a&& b >c)
    {
        d[2] = b;
        if(a < c )
        d[0] = a, d[1] = c;
        else 
        d[0] = c, d[1] = a;
    }
    else if( c > a && c >b)
    {
        d[2] = c;
        if( a > b)
        d[0] = b, d[1] = a;
        else
        d[0] = a, d[1] = b;
    }
    else 
    {
        if( c > b)
        d[1] = c,d[0] = b;
    }
    for(i = 0; i<3; i++)
    {
        printf("%d",d[A[i]-'A']);
        if(i <2)
        printf(" ");
    }
    return 0;
}