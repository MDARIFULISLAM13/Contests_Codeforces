#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        char c[b];
        scanf("%s", &c);

        int cp = 0;
        int cm = 0;
        for (int j = 0; j < b; j++)
        {
            if (c[j] == '+')
            {
                cp++;
            }
            else if (c[j] == '-')
            {
                cm++;
            }
        }
        int ans;
        if (cp > cm)
        {
            ans = cp - cm;
        }
        else
        {
            ans = cm - cp;
        }
        printf("%d", ans);
        printf("\n");
    }
}