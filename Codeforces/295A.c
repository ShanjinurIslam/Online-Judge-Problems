#include <stdio.h>
#include <string.h>

char to_lower(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c;
    }
    else
    {
        return c + 32;
    }
}

int main(void)
{
    int map[26] = {0};

    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    int len = strlen(s);

    int distinct = 0;

    int i;
    for (i = 0; i < len; i++)
    {
        s[i] = to_lower(s[i]);
        map[s[i] - 97] += 1;
    }

    int flag = 0;

    for (i = 0; i < 26; i++)
    {
        if (map[i] == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}