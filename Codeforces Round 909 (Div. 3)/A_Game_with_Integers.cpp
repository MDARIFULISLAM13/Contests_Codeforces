#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (b % 3 == 0)
        {
            printf("Second\n");
        }
        else
        {
            printf("First\n");
        }
    }
    return 0;
}