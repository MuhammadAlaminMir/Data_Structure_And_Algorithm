/* 
    Set Practice Problem: 1.
    Problem link: https://www.hackerrank.com/challenges/cpp-sets/problem
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
    int Q;
    set<int> ss;
    cin >> Q;
    while (Q--)
    {
        int y, x;
        cin >> y >> x;
        switch (y)
        {
        case 1:
            ss.insert(x);
            break;
        case 2:
            ss.erase(x);
            break;
        case 3:
            cout << (ss.count(x) ? "Yes" : "No") << endl;
            break;
        }
        }
    return 0;
}
