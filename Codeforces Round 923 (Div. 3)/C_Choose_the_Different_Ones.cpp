#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        set<ll> n, m, nm;
        for (int i = 0; i < a; i++)
        {
            ll v;
            cin >> v;
            if (v <= k)
            {
                n.insert(v);
                nm.insert(v);
            }
        }
        for (int i = 0; i < b; i++)
        {
            ll v;
            cin >> v;
            if (v <= k)
            {
                m.insert(v);
                nm.insert(v);
            }
        }

        if (nm.size() < k || n.size() < k / 2 || m.size() < k / 2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}