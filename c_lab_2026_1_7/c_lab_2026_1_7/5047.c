#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[21];
    int age;
    char id[11];
} Person;

int main()
{
    Person people[100];
    int n, q;
    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %s", people[i].name, &people[i].age, people[i].id);
    }

    for (int i = 0; i < q; i++)
    {
        char query_id[11];
        scanf("%s", query_id);
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(people[j].id, query_id) == 0)
            {
                printf("%s %d %s\n", people[j].name, people[j].age, people[j].id);
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("-1\n");
        }
    }

    return 0;
}