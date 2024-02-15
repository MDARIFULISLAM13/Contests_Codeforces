#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int q = x / n;
        int max_d = 1;
        for (int i = 1; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                if (i <= q)
                {
                    max_d = max(max_d, i);
                }
                if (x / i <= q)
                {
                    max_d = max(max_d, x / i);
                }
            }
        }
        cout << max_d << endl;
    }
}