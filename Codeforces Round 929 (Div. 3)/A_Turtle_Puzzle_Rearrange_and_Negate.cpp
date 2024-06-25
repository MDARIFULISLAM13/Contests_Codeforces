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
        ll sum = 0, v;
        for (ll i = 0; i < n; i++)
        {
            cin >> v;
            sum += abs(v);
        }
        cout << sum << "\n";
    }
    return 0;
}