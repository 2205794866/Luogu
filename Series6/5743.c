#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int peach(int n)
{
    if(n == 1)
    return 1;
    else
    return (peach(n - 1)+1) *2;
}


int main()
{
    int n,s;
    scanf("%d", &n);
    s = peach(n);
    printf("%d", s);
    return 0;
}