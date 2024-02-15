
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
    int a;
    cin >> a;
    while (a--)
    {
        long long int b, c;
        cin >> b >> c;
        long long d = c / 2;
        c = 0;
        c += (d * b);
        cout << c << endl;
    }
}