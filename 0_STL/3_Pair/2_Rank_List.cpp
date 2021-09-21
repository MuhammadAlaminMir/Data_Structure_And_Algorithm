/* 
    Pair Practice Problem: 2.
    Problem link: https://codeforces.com/problemset/problem/166/A
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

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first > p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p2.second > p1.second);
    return 0;
}

int main()
{
    optimize();

    int n, k, cnt = 0;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    for (auto u : v)
    {
        if (u == v[k - 1])
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}