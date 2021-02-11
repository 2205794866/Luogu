#include <stdio.h>

int main()
{
    char c;
    int n = 0;
    while( (c = getchar()) != '\n')
    {
        if(c != ' ')
        n++;
    }
    printf("%d", n);
    return 0;
}