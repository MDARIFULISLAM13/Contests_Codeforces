#include <bits/stdc++.h>
using namespace std;

void find(int n)
{
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            int k = n - i - j;
            if (k >= 1 && k <= 26)
            {
                cout << char(i + 'a' - 1) << char(j + 'a' - 1) << char(k + 'a' - 1) << "\n";
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        find(n);
    }

    return 0;
}