#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        // Input array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Check if there is any number that is a multiple of all numbers to its right
        int minRight = a[n - 1];
        bool possible = true;

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] % minRight == 0)
            {
                possible = false;
                break;
            }
            minRight = min(minRight, a[i]);
        }

        // Output result
        if (possible)
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
