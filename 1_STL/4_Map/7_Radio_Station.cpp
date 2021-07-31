/* 
    Map Practice Problem: 7.
    Problem link: https://codeforces.com/contest/918/problem/B
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
    int n, m;
    cin >> n >> m;
    map<string, string> names;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        names[b] = a;
    }
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        b.pop_back();
        cout << a << ' ' << b << ';' << " #" << names[b] << endl;
    }

    return 0;
}