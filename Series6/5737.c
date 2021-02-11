#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isleapyear(int n)
{
    int flag = 0;
    if((n % 4 ==0 && n %100 != 0) || n % 400 == 0 )
    flag = 1;
    return flag ;
}

int main()
{
    int x,y,a[1000],i,t;
    scanf("%d%d", &x,&y); 
    t = 0;
    for( i = x;i <=y; i++)
    {
        if(isleapyear(i))
        a[t++] = i;
    }
    printf("%d\n", t);
    for(i = 0; i<t; i++)
    printf("%d ", a[i]);
    return 0;
}