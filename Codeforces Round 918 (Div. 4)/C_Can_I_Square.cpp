#include <stdio.h>
#include <math.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    for (int i = 1; i <= a; i++)
    {
        long long int b;
        scanf("%lld", &b);
        long long int total = 0;
        for (long long int j = 1; j <= b; j++)
        {
            long long int c;
            scanf("%lld", &c);
            total = total + c;
        }

        long long int d = sqrt(total);
        long long int e = d * d;
        if (e == total)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}