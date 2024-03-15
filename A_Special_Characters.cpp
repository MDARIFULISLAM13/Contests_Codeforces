#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            string a;
            for (int i = 1; i <= n; i++)
            {
                a += 'A';
                if (i % 2 == 0 && i != n)
                {
                    a += 'B';
                }
            }
            cout << "YES\n";
            cout << a << endl;
        }
    }
}
