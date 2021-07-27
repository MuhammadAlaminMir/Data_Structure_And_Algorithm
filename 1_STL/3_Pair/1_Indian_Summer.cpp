/* 
    Pair Practice Problem: 1.
    Problem link: https://codeforces.com/contest/44/problem/A
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

void solution()
{
}

int main()
{
    optimize();

    int t;
    cin >> t;
    vector<pair<string, string>> s;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s.push_back({s1, s2});
    }

    sort(s.begin(), s.end());
    int res = unique(s.begin(), s.end()) - s.begin();

    cout << res << endl;

    return 0;
}