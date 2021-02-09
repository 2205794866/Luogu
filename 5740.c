#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void get_grades(char *s, int *a)
{
    int i;
    scanf("%s", s);
    a[3] = 0;
    for(i = 0; i<3; i++)
    {
        scanf("%d", &a[i]);
        a[3] +=  a[i];
    }
}




int main()
{
    char s[1000][100];
    int a[1000][4],i,n,max;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    get_grades(s[i], a[i]);
    max = 0;
    for(i = 0; i<n; i++)
    {
        if(a[i][3] > a[max][3])
        max = i;
    }
    printf("%s %d %d %d", s[max], a[max][0], a[max][1], a[max][2]);
    return 0;






}