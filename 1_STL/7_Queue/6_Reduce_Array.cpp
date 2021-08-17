/* 
    Priority_Queue Practice Problem: 3.
    Problem link: https://www.spoj.com/problems/REDARR2/
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

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll t_cost = 0;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        fo(i, n)
        {
            ll tmp;
            cin >> tmp;
            pq.push(tmp);
        }
        while (pq.size() > 1)
        {
            ll sum = pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            pq.push(sum);
            t_cost += sum;
        }
        cout << t_cost << endl;
    }

    return 0;
}
