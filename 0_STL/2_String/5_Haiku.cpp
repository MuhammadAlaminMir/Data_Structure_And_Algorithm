/* 
    String Practice Problem: 5.
    Problem link: https://codeforces.com/contest/78/problem/A
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    char v[] = {'a', 'o', 'e', 'u', 'i'};
    for (int j = 0; j < 5; j++)
    {
        if (c == v[j])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    vector<string> v;
    for (short i = 0; i < 3; i++)
    {
        string s;
        char c;
        cin >> c;
        getline(cin, s);
        s = c + s;
        v.push_back(s);
    }

    int phrase[] = {5, 7, 5};
    for (int i = 0; i < 3; i++)
    {
        int cnt = 0;
        for (auto u : v[i])
        {
            if (isVowel(u))
                cnt++;
        }
        if (cnt != phrase[i])
        {
            return cout << "NO\n", 0;
        }
    }
    cout << "YES\n";
}