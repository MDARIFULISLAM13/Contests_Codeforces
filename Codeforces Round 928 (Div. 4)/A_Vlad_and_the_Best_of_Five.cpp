#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        int ac = 0, bc = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'A')
            {
                ac++;
            }
            else if (a[i] == 'B')
            {
                bc++;
            }
        }
        if (bc > ac)
        {
            cout << "B\n";
        }
        else
        {
            cout << "A\n";
        }
    }
    return 0;
}