#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        long long b, c;
        scanf("%lld %lld", &b, &c);
        long long int d = b + c;
        if (d % 2 == 0)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
    return 0;
}