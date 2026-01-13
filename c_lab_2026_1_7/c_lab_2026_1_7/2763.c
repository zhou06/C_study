#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct 
{
    char name[21];
    double score[6];
}Student;

int main()
{
    Student s;
    double sum = 0;
    double average;

    scanf("%s", s.name);
    scanf("%lf %lf %lf %lf %lf %lf", &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4], &s.score[5]);

    sum = s.score[0] + s.score[1] + s.score[2] + s.score[3] + s.score[4] + s.score[5];
    average = sum / 6.0;

    printf("sum= %.2lf,average= %.2lf", sum, average);

    return 0;
}