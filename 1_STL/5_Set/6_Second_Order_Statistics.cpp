/* 
    Set Practice Problem: 6.
    Problem link: https://codeforces.com/problemset/problem/22/A
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

int main()
{
    optimize();
    int n;
    cin >> n;
    set<int> ss;
    fo(i, n)
    {
        int a;
        cin >> a;
        ss.insert(a);
    }
    if (ss.size() == 1)
        cout << "NO" << endl;
    else
    {
        std::set<int>::iterator it;
        it = ss.begin();
        advance(it, 1);
        cout << *it << endl;
    }

    return 0;
}
