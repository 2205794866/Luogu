#include <stdio.h>

int main()
{
    int s1,s2,s3,a[200] = {0},i,j,k,s,max,n;
    scanf("%d%d%d", &s1, &s2, &s3);
    for(i = 1; i<= s1; i++)
    for(j = 1; j<= s2; j++)
    for(k = 1; k<= s3; k++)
    {
        s = i+j+k;
        a[s]++;
    }
    s = s1+s2+s3;
    max = 1;
    for(i =3; i <= s; i++)
    {
        if(a[i]  > max)
        {
            n = i;
            max =a[i];
        }
    }
    printf("%d", n);
    return 0;
}