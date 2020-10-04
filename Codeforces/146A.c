#include <stdio.h>
#include <string.h>

int main(void)
{
    int map[26] = {0};

    char username[100];
    scanf("%s", username);

    int len = strlen(username);

    int distinct = 0;

    int i;
    for (i = 0; i < len; i++)
    {
        int value = username[i] - 97;
        if (map[value] == 0)
        {
            distinct += 1;
            map[value]++;
        }
    }

    if (distinct % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}