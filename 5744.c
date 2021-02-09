#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Member
{
    char Name[100];
    int Age;
    int Scores;
}member;

void get_member(member *p)
{
    scanf("%s%d%d", p->Name, &p->Age, &p->Scores);
}


void put_member(member *p)
{
    printf("%s %d %d\n", p->Name, p->Age, p->Scores);
}

void train_member(member *p,int n)
{
    int i;
    double s;
    for(i = 0; i<n; i++)
    {
        p[i].Age ++;
        s = p[i].Scores *1.2;
        p[i].Scores = (int) s;
        if(p[i].Scores >600)
        p[i].Scores = 600;
    }
}



int main()
{
    int n,i;
    member a[1000];
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    get_member( &a[i]);
    train_member(a, n);
    for( i = 0; i<n; i++)
    put_member(&a[i]);
    return 0;

}