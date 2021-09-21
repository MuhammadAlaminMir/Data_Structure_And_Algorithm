/* 
    Map Practice Problem: 3.
    Problem link: https://practice.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1#
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

string maximumFrequency(string s)
{

    vector<string> ss;
    map<string, int> mp;
    string word = "";
    for (auto x : s)
    {
        if (x == ' ')
        {
            ss.push_back(word);
            word = "";
        }
        else
        {
            word += x;
        }
    }
    ss.push_back(word);
    int mxFrq = 0;
    for (auto u : ss)
    {
        mp[u]++;
        mxFrq = max(mxFrq, mp[u]);
    }

    string res;

    for (auto u : ss)
    {
        if (mp[u] == mxFrq)
        {
            res = u;
            break;
        }
    }

    res += ' ';
    res += std::to_string(mxFrq);

    return res;
}

int main()
{
    optimize();
    string s;
    char c;
    cin >> c;
    getline(cin, s);
    s = c + s;
    cout << maximumFrequency(s) << endl;

    return 0;
}