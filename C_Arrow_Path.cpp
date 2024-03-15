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

        vector<int> a;
        int i;
        for (i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            a.push_back(v);
        }

        int f = 0;
        for (i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
                f = 1;
            else
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << "YES" << endl;
        else
        {
            int fl = 0;
            for (i = n - 1; i > 0; i--)
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
            for (i = 0; i < n; i++)
            {
                if (a[i] >= 10)
                {
                    n++;

                    int p = a[i] % 10;
                    a[i] = a[i] / 10;
                    a.insert(a.begin() + i + 1, p);
                }
            }
            for (i = 1; i < n + 1; i++)
            {
                if (a[i] >= a[i - 1])
                    f = 1;
                else
                {
                    f = 0;
                    break;
                }
            }
            if (f == 1)
                cout << "YES" << endl;
            else
                cout << "NO\n";
        }
    }

    return 0;
}