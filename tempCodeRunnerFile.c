#include <stdio.h>
#include <string.h>


#define N 6
int main()
{
    char s[26][20] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "a", "both", "another", "first", "second", "third"};
    char p[100];
    int s1[26]={1,4,9,16,25,36,49,64,81,0,11,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
    int s2[6];
    int i,j,t=0,min,temp;
    for(i = 0; i < N; i++)
    {
        scanf("%s", p);
        for(j = 0; j<26; j++)
        {
            if(!strcmp(p,s[j]))
            {
                s2[t++] = s1[j];
                break;
            }
        }
    }
    for(i = 0; i<t-1; i++)
    {
        for(j = 0; j<t-1-i; j++)
        {
            if(s2[j] < s2[j+1])
            {
                temp = s2[j];
                s2[j] = s2[j+1];
                s2[j+1] = temp;
            }
        }
    }
    min = 0;
    if(t)
    {
        i = 0,j = 1,t--;
        min = s2[i++];
        while(t)
        {
            j*=100;
            min += s2[i++] *j;
            t--;
        }
    }
    printf("%d", min);
    return 0;

}