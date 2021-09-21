/* 
    String Practice Problem: 6.
    Problem link: https://www.hackerearth.com/problem/algorithm/lexogeek-e6450fb7/description/
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;

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
        string s;
        int cnt;
        cin >> s;
        bool res = next_permutation(s.begin(), s.end());
        cnt = res;

        if (cnt)
            cout << s << endl;
        else
            cout << "no answer" << endl;
    }

    return 0;
}