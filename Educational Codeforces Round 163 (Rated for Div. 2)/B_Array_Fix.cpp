#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    if (is_sorted(a.begin(), a.end()))
    {
        cout << "YES\n";
        return;
    }
    else
    {
        int f = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] >= a[i - 1])
                f = 1;
            else
            {
                f = 0;
                n = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 10)
            {
                n++;

                int p = a[i] % 10;
                a[i] = a[i] / 10;
                a.insert(a.begin() + i + 1, p);
            }
        }
        if (is_sorted(a.begin(), a.end()))
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}