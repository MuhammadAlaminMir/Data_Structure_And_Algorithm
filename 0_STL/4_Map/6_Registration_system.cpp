/* 
    Map Practice Problem: 6.
    Problem link: https://codeforces.com/contest/4/problem/C
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<string> names;
    map<string, int> res;
    for (int i = 0; i < n; i++)

    {
        string a;
        cin >> a;
        names.pb(a);
    }
    for (auto u : names)
    {
        res[u]++;
        if (res[u] == 1)
            cout << "OK" << endl;
        else
            cout << u << res[u] - 1 << endl;
    }

    return 0;
}