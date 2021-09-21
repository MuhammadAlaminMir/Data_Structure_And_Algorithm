/* 
    Priority_Queue Practice Problem: 4.
    Problem link: https://codeforces.com/contest/799/problem/B
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
using ll = long long int;
using pii = pair<int, int>;
using vi = vector<int>;

const int mx = 2e5 + 123;
ll p[mx];
int a[mx];
int b[mx];
int main()
{
    optimize();
    int n, m;
    cin >> n;

    fo(i, n) cin >> p[i];
    fo(i, n) cin >> a[i];
    fo(i, n) cin >> b[i];

    priority_queue<int, vector<int>, greater<int>> pq[5][5];
    fo(i, n)
    {
        pq[a[i]][b[i]].push(p[i]);
    }
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        int ans = INT_MAX;
        int f, b;
        for (int i = 1; i <= 3; i++)
        {
            if (!pq[q][i].empty() && pq[q][i].top() < ans)
            {
                ans = pq[q][i].top();
                f = q;
                b = i;
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            if (!pq[i][q].empty() && pq[i][q].top() < ans)
            {
                ans = pq[i][q].top();
                f = i;
                b = q;
            }
        }
        if (ans == INT_MAX)
            ans = -1;
        else
        {
            pq[f][b].pop();
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}
