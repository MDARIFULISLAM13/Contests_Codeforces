/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-08-2024
 * time : 22:09:27
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
void arif()
{
    int n, k;
    cin >> n >> k;
    vec a(n);
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int ans = -1;

    for (int i = mx; i < mx + k; ++i)
    {
        bool on = true;
        for (int j = 0; j < n; ++j)
        {
            if ((i - a[j]) % (2 * k) >= k)
            {
                on = false;
                break;
            }
        }
        if (on)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}