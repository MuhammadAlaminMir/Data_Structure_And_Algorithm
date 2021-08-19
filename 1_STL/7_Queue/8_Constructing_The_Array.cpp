/* 
    Priority_Queue Practice Problem: 5.
    Problem link: https://codeforces.com/contest/1353/problem/D
    Solution:
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef priority_queue<int> pq;
typedef priority_queue<pair<int, int>> pqp;

#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<pair<int, int>> q;
        int n;
        cin >> n;
        vi arr(n + 1, 0);
        q.push({n, -1});
        int cnt = 1;
        while (!q.empty())
        {
            int l = q.top().second * -1;
            int len = q.top().first;
            q.pop();
            int r = l + len - 1;
            int mid;
            if (len % 2)
            {
                mid = (l + r) / 2;
            }
            else
            {
                mid = (l + r - 1) / 2;
            }
            arr[mid] = cnt;
            cnt++;
            int l1, l2, r1, r2;
            l1 = l;
            r1 = mid - 1;

            l2 = mid + 1;
            r2 = r;

            if (l1 <= r1)
            {
                q.push({r1 - l1 + 1, -l1});
            }
            if (l2 <= r2)
            {
                q.push({r2 - l2 + 1, -l2});
            }
        }
        for (int i = 1; i <= n; i++)
            cout << arr[i] << ' ';
        cout << endl;
    }

    return 0;
}
