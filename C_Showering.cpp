/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-08-2024
 * time : 21:14:41
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

bool canShower(int n, int s, int m, const vector<pair<int, int>> &tasks)
{

    if (tasks[0].first >= s)
        return true;

    for (int i = 1; i < n; ++i)
    {
        if (tasks[i].first - tasks[i - 1].second >= s)
            return true;
    }

    if (m - tasks[n - 1].second >= s)
        return true;

    return false;
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
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> tasks(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> tasks[i].first >> tasks[i].second;
        }

        if (canShower(n, s, m, tasks))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}