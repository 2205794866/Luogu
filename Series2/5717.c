#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    int max,mid,min;
    max = a, min = c, mid = b;
    if( b > a&& b >c)
    {
        max = b;
        if(a < c )
        min = a, mid = c;
        else 
        min = c, mid = a;
    }
    else if( c > a && c >b)
    {
        max = c;
        if( a > b)
        min = b, mid = a;
        else
        min = a, mid = b;
    }
    else 
    {
        if( c > b)
        mid = c, min = b;
    }
    if( min + mid <= max)
        printf("Not triangle\n");
    else 
    {
        if( min*min+ mid * mid == max * max)
            printf("Right triangle\n");
        if( min*min+ mid * mid > max * max)
            printf("Acute triangle\n");
        if(min*min+ mid * mid < max * max)
            printf("Obtuse triangle\n");
        if(!((a-b)*(a-c)*(b-c)))
            printf("Isosceles triangle\n");
        if((!(a-b)) && (!(b-c)))
            printf("Equilateral triangle\n");
    }
    return 0;




}