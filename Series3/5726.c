#include <stdio.h>

int main()
{
    int a[1000], max, min,i,n,s=0;
    double average;
    scanf ("%d", &n);
    for(i = 0; i<n ; i++)
    {
        scanf("%d", &a[i]);
        s += a[i];
    } 
    max = a[0], min = a[0];
    for(i = 0; i<n; i++)
    {
        if(a[i] < min)
        min = a[i];
        if(a[i] > max)
        max = a[i];
    }
    s = s-max-min;
    average = s*1.0/(n-2);
    printf("%.2f", average);
    return 0;
}