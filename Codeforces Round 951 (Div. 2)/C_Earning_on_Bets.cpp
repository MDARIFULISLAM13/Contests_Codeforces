/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2024
 * time : 21:31:12
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
void arif() {
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int x = 1;

    for (int i : a) {
        int y = __gcd(x, i);
        y = i / y;
        x *= y;
    }
    int sum = 0;
    vec ans;
    for (int i : a) {
        sum += x / i;
        ans.push_back(x / i);
    }
    if (sum >= x) {
        cout << "-1" << endl;
        return;
    }
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}