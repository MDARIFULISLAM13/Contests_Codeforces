#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {

        ll a;
        cin >> a;
        ll f = 0, l = 0, b = 0;
        string c;
        cin >> c;
        for (ll i = 0; i < a; i++)
        {
            if (c[i] == 'B')
            {
                if (b == 0)
                {
                    f = i;
                    b = 1;
                }
                l = i;
            }
        }
        cout << l - f + 1 << endl;
    }
}