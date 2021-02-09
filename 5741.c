#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void get_scores(char *s, int *a)
{
    scanf("%s", s);
    int i,j;
    a[3] = 0;
    for(i = 0; i<3; i++)
    {
        scanf("%d", &a[i]);
        a[3] += a[i];
    }
}




int main()
{
    int n,i,j,a[1000][4];
    char s[1000][10];
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    get_scores(s[i], a[i]);
    for( i = 0; i<n-1; i++)
    for( j = i+1; j<n ;j++)
    {
        if(abs( a[i][0] - a[j][0]) <= 5 && abs( a[i][1] - a[j][1]) <= 5 && abs( a[i][2] - a[j][2]) <= 5 && abs( a[i][3] - a[j][3]) <= 10 )
        printf("%s %s\n", s[i], s[j]);
    }
    return 0;
}