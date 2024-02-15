#include <stdio.h>
#include <string.h>

void find_values(char *ab)
{
    int n = strlen(ab);
    int a, b;

    for (int i = 1; i < n; i++)
    {
        char a_str[i + 1];
        char b_str[n - i + 1];

        strncpy(a_str, ab, i);
        a_str[i] = '\0';

        strncpy(b_str, ab + i, n - i);
        b_str[n - i] = '\0';

        sscanf(a_str, "%d", &a);
        sscanf(b_str, "%d", &b);

        if (a_str[0] != '0' && b_str[0] != '0' && b > a)
        {
            printf("%d %d\n", a, b);
            return;
        }
    }

    printf("-1\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char ab[10];
        scanf("%s", ab);
        find_values(ab);
    }

    return 0;
}