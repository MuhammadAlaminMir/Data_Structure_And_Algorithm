/* 
    String Practice Problem: 1.
    Problem link: https://codeforces.com/problemset/problem/118/A
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    char v[] = {'a', 'o', 'y', 'e', 'u', 'i'};
    for (int j = 0; j < 6; j++)
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
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c)
              { return std::tolower(c); });
    for (int i = 0; i < s.size(); i++)
    {

        if (isVowel(s[i]))
        {
            s.erase(s.begin() + i);
            i--;
            continue;
        }
        else
        {
            s.insert(s.begin() + i, '.');
            i++;
        }
    }
    cout << s << endl;

    return 0;
}