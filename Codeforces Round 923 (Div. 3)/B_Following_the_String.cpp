#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{

#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    fastread();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, i, t, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, c[n];
        for (i = 0; i < n; i++)
        {
            cin >> c[i];
            for (x = 0; x < 26; x++)
            {
                if (a[x] == c[i])
                {
                    cout << char(x + 'a');
                    a[x]++;
                    break;
                }
            }
        }

        cout << "\n";
    }
    return 0;
}