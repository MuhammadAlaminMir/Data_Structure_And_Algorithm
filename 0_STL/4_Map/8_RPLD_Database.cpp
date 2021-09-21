/* 
    Map Practice Problem: 8.
    Problem link: https://www.spoj.com/problems/RPLD/
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
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int n, m, done = 1;
        cin >> n >> m;
        map<pair<int, int>, bool> res;

        while (m--)
        {
            int a, b;
            cin >> a >> b;
            if (res[{a, b}])
                done = 0;
            res[{a, b}] = 1;
        }

        if (done == 1)
        {
            cout << "Scenario #" << j << ": possible" << endl;
        }
        else
            cout << "Scenario #" << j << ": impossible" << endl;
    }

    return 0;
}
