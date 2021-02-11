#include <stdio.h>

int main()
{
    int n,i,j,t =0;
    char a[100],s[5][400],x = 'X', y='.';
    scanf("%d", &n);
    scanf("%s", a);
    for(i =0; i<n; i++)
    {
        switch (a[i])
        {
            case '0': 
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = y;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;
            case '1':
            s[0][t] = y;
            s[1][t] = y;
            s[2][t] = y;
            s[3][t] = y;
            s[4][t] = y;
            t++;
            s[0][t] = y;
            s[1][t] = y;
            s[2][t] = y;
            s[3][t] = y;
            s[4][t] = y;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;
            case '2':
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            break;
            case '3':
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;
            case '4':
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = y;
            t++;
            s[0][t] = y;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = y;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;
            case '5':
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;
            case '6':
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;
            case '7':
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = y;
            s[3][t] = y;
            s[4][t] = y;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = y;
            s[3][t] = y;
            s[4][t] = y;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;   
            case '8':
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break; 
            case '9':
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = y;
            s[2][t] = x;
            s[3][t] = y;
            s[4][t] = x;
            t++;
            s[0][t] = x;
            s[1][t] = x;
            s[2][t] = x;
            s[3][t] = x;
            s[4][t] = x;
            t++;
            break;                    
        }
    }
    for(i = 0; i< 5; i++)
    {
        for(j = 0; j< 3*n-3; j = j+3)
        {
            printf("%c%c%c.", s[i][j], s[i][j+1], s[i][j+2]);
        }
    printf("%c%c%c\n", s[i][j], s[i][j+1], s[i][j+2]);
    }
    return 0;
}