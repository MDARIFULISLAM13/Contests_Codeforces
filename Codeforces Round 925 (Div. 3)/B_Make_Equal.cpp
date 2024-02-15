#include <iostream>
#include <vector>
using namespace std;

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

        vector<long long> containers(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> containers[i];
        }

        long long average = 0;
        for (int i = 0; i < n; ++i)
        {
            average += containers[i];
        }
        average /= n;

        bool possible = true;
        for (int i = 0; i < n - 1; ++i)
        {
            containers[i + 1] += containers[i] - average;
            if (containers[i] < average)
            {
                possible = false;
                break;
            }
        }

        if (possible && containers[n - 1] == average)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}