#include <stdio.h>

int area(int x[4], int y[4])
{
    int side = 0;

    for (int i = 1; i < 4; i++)
    {
        if (x[i] != x[0])
        {
            side = x[i] - x[0];
            break;
        }
        else if (y[i] != y[0])
        {
            side = y[i] - y[0];
            break;
        }
    }

    return side * side;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x[4], y[4];

        for (int j = 0; j < 4; j++)
        {
            scanf("%d %d", &x[j], &y[j]);
        }

        printf("%d\n", area(x, y));
    }

    return 0;
}