#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void arif()
{
    ll n;
    cin >> n;
    ll sum = 0, v;
    ll vl[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> v;
        vl[i] = v;
        sum += v;
    }
    if (sum % 3 == 0)
    {
        cout << "0\n";
        return;
    }
    if ((sum + 1) % 3 == 0)
    {
        cout << "1\n";
        return;
    }
    if (sum - v == 0)
    {
        cout << "1\n";
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if ((sum - vl[i]) % 3 == 0)
        {
            cout << "1\n";
            return;
        }
    }
    cout << "2\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        arif();
    }

    return 0;
}