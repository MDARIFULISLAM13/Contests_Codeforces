#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);

        char c[b + 1];
        scanf("%s", c);

        for (int j = 0; j < b; j++)
        {
            putchar(c[j]);

            if (j < b - 1 && (c[j] != 'a' && c[j] != 'e') && (c[j + 1] == 'a' || c[j + 1] == 'e'))
            {
                putchar(c[j + 1]);
                j++;

                if (j < b - 1 && (c[j + 1] != 'a' && c[j + 1] != 'e') && (c[j + 2] != 'a' && c[j + 2] != 'e'))
                {
                    putchar(c[j + 1]);
                    j++;
                }
            }

            if (j < b - 1)
            {
                putchar('.');
            }
        }

        printf("\n");
    }

    return 0;
}