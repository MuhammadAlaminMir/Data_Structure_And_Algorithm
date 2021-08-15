/* 
    Priority_Queue Practice Problem: 1.
    Problem link: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
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
    int n;
    cin >> n;
    vector<ll> v(n);
    priority_queue<ll> pq;
    fo(i, n) cin >> v[i];
    fo(i, n)
    {
        ll sum = 1;
        pq.push(v[i]);
        if (pq.size() > 2)
        {
            vector<ll> v2;
            fo(i, 3)
            {
                sum *= pq.top();

                v2.push_back(pq.top());
                pq.pop();
            }
            fo(i, 3) pq.push(v2[i]);
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
        cout << sum << endl;
    }

    return 0;
}
