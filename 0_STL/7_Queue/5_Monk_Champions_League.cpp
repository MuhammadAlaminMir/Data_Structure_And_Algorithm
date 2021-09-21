/* 
    Priority_Queue Practice Problem: 2.
    Problem link: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/
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
    int m, n;
    ll ans = 0;
    cin >> m >> n;
    priority_queue<ll> pq;
    fo(i, m)
    {
        int tmp;
        cin >> tmp;
        pq.push(tmp);
    }

    fo(i, n)
    {
        int tmp = pq.top();
        ans += tmp;
        pq.pop();
        tmp--;
        pq.push(tmp);
    }
    cout << ans << endl;

    return 0;
}
