#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double get_average(int *a, int m)
{
    double average;
    int i,max,min,s;
    max = min = *a;
    for(i = 0; i<m; i++)
    {
        if(a[i] > max)
        max = a[i];
        if(a[i] < min)
        min = a[i];
    }
    s = 0;
    for(i = 0; i<m ;i++)
    s += a[i];
    s = s-max-min;
    average = s *1.0 / (m - 2);
    return average;
}

int main()
{
    int n,i,m,j,a[100][20];
    double average[20],max;
    scanf("%d%d", &n, &m);
    for( i = 0; i<n; i++)
    {
        for( j = 0; j < m; j++)
        scanf("%d", &a[i][j]);
    }
    for( i = 0; i<n; i++)
    {
        average[i] = get_average(a[i],m);
    }
    max = average[0];
    for( i = 0; i<n; i++)
    {
        if(average[i] > max)
        max = average[i];
    }
    printf("%.2f", max);
    return 0;
}