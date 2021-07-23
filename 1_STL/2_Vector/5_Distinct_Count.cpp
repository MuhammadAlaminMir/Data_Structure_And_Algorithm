/* 
    Vector Practice Problem: 4.
    Problem link: https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, n, num, sz = 0;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {

            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());
        sz = unique(v.begin(), v.end()) - v.begin();
        if (sz == x)
        {
            cout << "Good" << endl;
        }
        else if (sz > x)
        {
            cout << "Average" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }

        v.clear();
    }
}