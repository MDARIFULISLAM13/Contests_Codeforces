#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        long long ans = 0;

        for (int i = 1; i < 2 * n; i += 2) {
            ans += a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}