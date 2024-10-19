/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-08-2024
 * time : 21:17:19
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

string transformString(string s, const string &t)
{
    int n = s.length();
    int m = t.length();
    int j = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '?')
        {

            if (j < m)
            {
                s[i] = t[j++];
            }
            else
            {
                s[i] = 'a';
            }
        }
        else if (s[i] == t[j])
        {
            ++j;
        }
    }

    if (j < m)
        return "NO";

    for (char &ch : s)
    {
        if (ch == '?')
            ch = 'a';
    }

    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;

    while (T--)
    {
        string s, t;
        cin >> s >> t;

        string result = transformString(s, t);
        if (result == "NO")
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << result << "\n";
        }
    }

    return 0;
}