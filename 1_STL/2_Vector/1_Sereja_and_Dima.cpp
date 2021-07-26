/* 
    Vector Practice Problem: 1.
    Problem link: https://codeforces.com/problemset/problem/381/A
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, sr_sum = 0, dm_sum = 0, cnt = 1, big;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int card = 0;
        cin >> card;
        v.push_back(card);
    }

    for (int i = 0; i < n; i++)
    {

        if (v[0] > v.back())
        {
            big = v[0];
            v.erase(v.begin());
        }
        else
        {
            big = v.back();
            v.pop_back();
        }
        if (cnt)
        {
            sr_sum += big;
            cnt--;
        }
        else
        {
            dm_sum += big;
            cnt++;
        }
    }

    cout << sr_sum << " " << dm_sum << endl;

    return 0;
}