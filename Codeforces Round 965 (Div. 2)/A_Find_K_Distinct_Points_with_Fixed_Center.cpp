/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-08-2024
 * time : 21:00:58
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

    int x, y, k;
    cin >> x >> y >> k;
    int z = k / 2;
    for (int i = 0; i < z; i++)
    {
        cout << x - i - 1 << ' ' << y << '\n';
        cout << x + i + 1 << ' ' << y << '\n';
    }
    if (k & 1)
        cout << x << ' ' << y << '\n';
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