#include <stdio.h>


int main()
{
    char a[10][10], b[10][10],temp;
    int n,i,j,s,flag = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%s", a[i]);
    }
    for(i = 0; i<n; i++)
    {
        scanf("%s", b[i]);
    }
    if(!flag)
    {
        flag = 1;
        for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
        if(a[i][j] != b[j][n-i-1])
        {
            flag = 0;
            break;
        }
        if(flag)
        s = 1;
    }
    if(!flag)
    {
        flag = 1;
        for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
        if(a[i][j] != b[n-i-1][n-j-1])
        {
            flag = 0;
            break;
        }
        if(flag)
        s = 2;
    }
    if(!flag)
    {
        flag = 1;
        for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
        if(a[i][j] != b[n-j-1][i])
        {
            flag = 0;
            break;
        }
        if(flag)
        s = 3;
    }
    if(!flag)
    {
        flag = 1;
        for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
        if(a[i][j] != b[i][n-j-1])
        {
            flag = 0;
            break;
        }
        if(flag)
        s = 4;
    }
    if(!flag)
    {
        for(i = 0; i<n; i++)
        for(j = 0; j<n/2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
        if(!flag)
        {
            flag = 1;
            for(i = 0; i<n; i++)
            for(j = 0; j<n; j++)
            if(a[i][j] != b[j][n-i-1])
            {
                flag = 0;
                break;
            }
            if(flag)
            s = 5;
        }
        if(!flag)
        {
            flag = 1;
            for(i = 0; i<n; i++)
            for(j = 0; j<n; j++)
            if(a[i][j] != b[n-i-1][n-j-1])
            {
                flag = 0;
                break;
            }
            if(flag)
            s = 5;            
        }
        if(!flag)
        {
            flag = 1;
            for(i = 0; i<n; i++)
            for(j = 0; j<n; j++)
            if(a[i][j] != b[n-j-1][i])
            {
                flag = 0;
                break;
            }
            if(flag)
            s = 5;            
        }
    }
    if(!flag)
    {
        flag = 1;
        for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
        if(a[i][j] != b[i][j])
        {
            flag = 0;
            break;
        }
        if(flag)
        s = 6;
    }
    if(!flag)
    {
        flag = 1;
        s = 7;
    }    
    printf("%d", s);
    return 0;
}