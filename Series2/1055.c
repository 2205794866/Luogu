#include <stdio.h>

int main()
{
    int a[3],b[9],i,k= 0,j,l=0,m=0,temp;
    char c;
    scanf("%d-%d-%d-",&a[0], &a[1], &a[2]);
    scanf("%c", &c);
    if(c>= '0'&& c <= '9')
        c = c-'0';
    for(i = 0,j = 1; i<3; i++, j+=2)
    {
        m += j;
        temp = a[i];
        l = m;
        for(k = 0; k<j; k++)
        {
            b[l-1] = temp % 10;
            temp /= 10;
            l--;
        }
    }
    int s= 0;
    for(i = 0; i<9; i++)
    s += b[i] *(i+1);
    s %= 11;
    if(s == 10)
        s = 'X';
    if( s == c)
        printf("Right");
    else
    {
        if(s > 9)
        printf("%d-%d-%d-%c", a[0], a[1], a[2], s);
        else printf("%d-%d-%d-%d", a[0], a[1], a[2],s);        
    }
    return 0;


}