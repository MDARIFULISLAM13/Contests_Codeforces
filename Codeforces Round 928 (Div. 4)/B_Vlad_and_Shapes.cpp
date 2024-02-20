#include <bits/stdc++.h>
using namespace std;

void arif()
{
    int n;
    cin >> n;

    char b = '1';
    string a;
    int l1 = 0;
    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int countt = count(a.begin(), a.end(), b);
        maximum = max(maximum, countt);

        l1 += countt;
    }

    if (l1 % maximum == 0)
    {
        cout << "SQUARE\n";
    }
    else
    {
        cout << "TRIANGLE\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}