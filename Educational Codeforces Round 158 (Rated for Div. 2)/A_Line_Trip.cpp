#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b, x;
    int m = 0, n;
    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d ", &b, &x);
        for (int l = 1; l <= b; l++)
        {
            scanf("%d", &n);
            int su;
            su = n - m;

            if (sum < su)
            {
                sum = su;
            };
            if (l == b)
            {
                int v = x - n;
                v = v * 2;
                if (sum < v)
                {
                    sum = v;
                }
            }
            m = n;
        }
        printf("%d\n", sum);
        sum = 0;
        m = 0;
        n = 0;
        b = 0;
    }
}