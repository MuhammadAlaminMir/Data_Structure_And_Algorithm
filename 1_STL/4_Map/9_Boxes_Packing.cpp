/* 
    Map Practice Problem: 9.
    Problem link: https://codeforces.com/contest/903/problem/C
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
    int n, ans = 1;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    for (auto u : mp)
        if (u.second > ans)
            ans = u.second;

    cout << ans << endl;
    return 0;
}
