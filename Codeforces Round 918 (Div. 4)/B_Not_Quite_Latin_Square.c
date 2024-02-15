#include <stdio.h>
#include <string.h>
int main()
{
    int nn;
    scanf("%d", &nn);
    int n;
    n = nn * 3;
    char a[3];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", a);
        for (int j = 0; j < 3; j++)
        {
            int x = 0;
            if (a[j] == '?')
            {
                for (int k = 0; k < 3; k++)
                {
                    x = x + a[k];
                }
                int y = 261 - x;
                printf("%c\n", y);
                break;
            }
        }
    }
}