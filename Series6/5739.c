#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int jc( int n)
{
    if(n == 1)
    return 1;
    else
    return jc(n - 1) * n;
}


int main()
{
    int result,n;
    scanf("%d", &n);
    result = jc(n);
    printf("%d", result);
    return 0;
}