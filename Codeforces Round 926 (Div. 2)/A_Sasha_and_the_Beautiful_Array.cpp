#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll min = INT_MAX;
        ll max = INT_MIN;
        int value;
        for (int i = 1; i <= n; i++)
        {
            cin >> value;
            if (value > max)
            {
                max = value;
            }
            if (value < min)
            {
                min = value;
            }
        }
        cout << max - min << "\n";
    }

    return 0;
}