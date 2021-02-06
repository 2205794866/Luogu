#include <stdio.h>

int main()
{
    char c;
    int n;
    n = 0;
    while((c = getchar()) != '\n')
    {
        switch(c)
        {
            case ' ':
            case 'a':
            case 'd':
            case 'g':
            case 'j':
            case 'm':
            case 'p':
            case 't':
            case 'w':n+=1;
                    break;
            case 'b':
            case 'e':
            case 'h':
            case 'k':
            case 'n':
            case 'q':
            case 'u':
            case 'x':n+=2;
                    break;
            case 'c':
            case 'f':
            case 'i':
            case 'l':
            case 'o':
            case 'r':
            case 'v':
            case 'y':
                    n+=3;
                    break;
            case 's':
            case 'z':
                    n+=4;
                    break;
        }
    }
    printf("%d", n);
    return 0;
}