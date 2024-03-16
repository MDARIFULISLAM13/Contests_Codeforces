#include <bits/stdc++.h>
using namespace std;

void arif()
{
    int n, k;
    cin >> n >> k;

    int ans = (n * (n - 1)) / 2; // Total number of bridges
    ans -= k;                    // Remaining bridges after destruction
    ans = min(n, ans);           // Minimum number of islands reachable

    cout << ans << "\n"; // Output the result
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
