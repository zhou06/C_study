#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[11];
    int solved;
    int time;
} Student;

int compare(const void* a, const void* b)
{
    Student* s1 = (Student*)a;
    Student* s2 = (Student*)b;

    if (s1->solved != s2->solved)
    {
        return s2->solved - s1->solved;
    }

    if (s1->time != s2->time)
    {
        return s1->time - s2->time;
    }

    return strcmp(s1->name, s2->name);
}

int main()
{
    int n, m;
    Student students[1000];
    int count = 0;

    if (scanf("%d %d", &n, &m) == 2)
    {
        while (scanf("%s", students[count].name) != EOF)
        {
            students[count].solved = 0;
            students[count].time = 0;

            int i;
            for (i = 0; i < n; i++)
            {
                char buffer[30];
                scanf("%s", buffer);

                if (strchr(buffer, '(') != NULL)
                {
                    int ac_time, penalty_count;
                    sscanf(buffer, "%d(%d)", &ac_time, &penalty_count);
                    students[count].solved++;
                    students[count].time += ac_time + (penalty_count * m);
                }
                else
                {
                    int val = atoi(buffer);
                    if (val > 0)
                    {
                        students[count].solved++;
                        students[count].time += val;
                    }
                }
            }
            count++;
        }
    }

    qsort(students, count, sizeof(Student), compare);

    int i;
    for (i = 0; i < count; i++)
    {
        printf("%-10s %2d %4d\n", students[i].name, students[i].solved, students[i].time);
    }

    return 0;
}