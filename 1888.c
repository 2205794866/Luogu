#include <stdio.h>

int main()
{
    int a,b,c,max, min;
    scanf("%d%d%d", &a, &b, &c);
    max = a,min = c;
    if(b>c && b>a)
    {
        max = b;
        if( a < c)
        min = a;
    }
    else if( c > b && c> a)
    {
        max = c;
        if( b > a)
        min = a;
        else 
        min = b;
    }
    else 
    {
        if( b <c)
        min = b;
    }
    int temp1 = max, temp2 = min, t; 
    while (temp2 != 0)
    {
        t = temp1 % temp2;
        temp1 = temp2;
        temp2 = t; 
    }
    max /= temp1;
    min /= temp1;
    printf("%d/%d", min, max);
    return 0;


}