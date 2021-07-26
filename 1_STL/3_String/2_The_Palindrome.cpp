/* 
    String Practice Problem: 2.
    Problem link: https://www.hackerearth.com/problem/algorithm/the-palindrome-2/
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
        string s, temp;
        cin >> s;
        temp = s;
        reverse(temp.begin(), temp.end());
        if (s == temp)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}