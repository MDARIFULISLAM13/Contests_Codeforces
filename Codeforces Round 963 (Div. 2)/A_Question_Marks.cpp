/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-08-2024
 * time : 20:41:57
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
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    int cnt = 0;
    int ans = 0;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' && a < n)
        {
            ans++;
            a++;
        }
        if (s[i] == 'B' && b < n)
        {
            ans++;
            b++;
        }
        if (s[i] == 'C' && c < n)
        {
            ans++;
            c++;
        }
        if (s[i] == 'D' && d < n)
        {
            ans++;
            d++;
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