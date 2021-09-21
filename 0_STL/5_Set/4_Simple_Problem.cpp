/* 
    Set Practice Problem: 4.
    Problem link: https://codeforces.com/problemset/problem/469/A
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
    int n, p;
    cin >> n >> p;
    set<int> v;
    fo(i, n) v.insert(i + 1);
    set<int> ss;
    fo(i, p)
    {
        int a;
        cin >> a;
        ss.insert(a);
    }
    cin >> p;
    fo(i, p)
    {
        int a;
        cin >> a;
        ss.insert(a);
    }
    if (ss == v)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
