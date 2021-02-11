#include <stdio.h>
#include <string.h>


void func1(char *p, char *t)
{
    strcat(p, t);
    printf("%s\n",p);
}

void func2(char *p, int a, int b)
{
    *(p+a+b) = '\0';
    strcpy(p, p+a);
    printf("%s\n", p);
}

void func3(char *p, int a,char *t)
{
    int len1 = strlen(t),len2 = strlen(p);
    char *p1 = p+a;
    char *p2 = p+len2;
    while(p2 >= p1)
    {
        *(p2+len1) = *p2;
        p2--;
    }
    while(*t)
    *p1++ = *t++;
    printf("%s\n", p);
}

void func4(char *p, char *t)
{
    char *s;
    s = strstr(p,t);
    if(s)
        printf("%d\n",s-p);
    else
        printf("-1\n");
}


int main()
{
    int a[100],b[100],c[100],n,i;
    char p[100],s[100][100];
    scanf("%d", &n);
    scanf("%s", p);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
        switch(a[i])
        {
            case 1:
                scanf("%s", s[i]);
            break;
            case 2:
                scanf("%d%d", &b[i], &c[i]);
            break;
            case 3:
                scanf("%d%s", &b[i], s[i]);
            break;
            case 4:
                scanf("%s", s[i]);
            break;
        }
    }


    for(i = 0; i < n; i++)
    {
        switch(a[i])
        {
            case 1:
                func1(p, s[i]);
            break;
            case 2:
                func2(p, b[i],c[i]);
            break;
            case 3:
                func3(p,b[i], s[i]);
            break;
            case 4:
                func4(p, s[i]);
            break;
        }
    }
    
    return 0;
}