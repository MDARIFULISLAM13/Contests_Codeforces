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
int main()
{
    fastread();
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        char c[b];
        for (int i = 0; i < b; i++)
        {
            c[i] = 'a' + i;
        }
        for (int j = 1; j <= a; j++)
        {
            for (int i = 0; i < b; i++)
            {
                cout << c[i];
            }
        }
        cout << endl;
    }
}