/* 
    Map Practice Problem: 4.
    Problem link: https://atcoder.jp/contests/arc087/tasks/arc087_a
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
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    int ans = 0;
    for (auto u : mp)
    {

        if (u.second >= u.first)
        {
            ans += u.second - u.first;
        }
        else
            ans += u.second;
    }

    cout << ans << endl;

    return 0;
}