/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-08-2024
 * time : 20:57:41
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
    int n;
    cin >> n;
    vec a;
    ll mx = 0;
    int ck = 0;
    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        if (v % 2 != 0)
        {
            mx = max(v, mx);
        }
        else
        {
            ck = 1;
            a.push_back(v);
        }
    }
    if (mx == 0 || ck == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > mx)
        {

            ans++;
            mx += a[i];
        }
        ans++;
        mx = max(mx, (mx + a[i]));
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