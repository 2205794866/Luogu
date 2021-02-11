#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Student
{
    int ID;
    int XYscores;
    int TZscores;
    int total_scores;
    double final_scores;

} student;

void input_scores( student *p)
{
    scanf("%d%d%d", &p->ID, &p->XYscores,&p->TZscores);
    p->total_scores = p->XYscores + p->TZscores;
    p->final_scores = p->XYscores * 0.7 + p->TZscores * 0.3;
}


void output_scores(student *p)
{
    printf("%d\n", p->final_scores);
}

int judge( student *p)
{
    int flag = 0;
    if(p->total_scores > 140 && p->final_scores >= 80)
    flag = 1;
    return flag;
}


int main()
{
    student a[1000];
    int n,i;
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    input_scores(& a[i]);
    for( i = 0; i<n; i++)
    {
        if(judge( & a[i]))
        printf("Excellent\n");
        else
        printf("Not excellent\n");
    }
    return 0;
}

