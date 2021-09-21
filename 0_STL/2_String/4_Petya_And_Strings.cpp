/* 
    String Practice Problem: 4.
    Problem link: https://codeforces.com/contest/112/problem/A
    note: In this problen I have used an unique function called: transform, This help me
    to conver every element of string into lowercase latter.
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
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(),
              [](unsigned char c)
              { return std::tolower(c); });
    transform(b.begin(), b.end(), b.begin(),
              [](unsigned char c)
              { return std::tolower(c); });
    if (a > b)
    {
        cout << 1 << endl;
    }
    else if (a < b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}