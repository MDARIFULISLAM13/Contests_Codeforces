#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        if (b == c)
        {
            printf("%d\n", d);
        }
        else if (c == d)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    return 0;
}