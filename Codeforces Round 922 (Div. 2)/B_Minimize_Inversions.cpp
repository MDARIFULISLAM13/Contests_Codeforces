#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<pair<int, int>> comb;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            comb.push_back({a[i], b[i]});
        }
        sort(comb.begin(), comb.end());
        for (auto &p : comb)
        {
            cout << p.first << " ";
        }
        cout << endl;
        for (auto &p : comb)
        {
            cout << p.second << " ";
        }
        cout << endl;
    }
    return 0;
}