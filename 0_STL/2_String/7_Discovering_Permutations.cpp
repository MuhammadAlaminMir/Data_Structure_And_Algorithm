/* 
    String Practice Problem: 7.
    Problem link: https://lightoj.com/problem/discovering-permutations
    Solution:
 */
#include <bits/stdc++.h>

using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
string findELetter(int cnt);

int main()
{
    optimize();
    int t, count = 1;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        string C = findELetter(N);
        cout << "Case " << count << ":" << endl;

        do
        {
            cout << C << "\n";
            K--;
            if (K == 0)
                break;
        } while (next_permutation(C.begin(), C.end()));

        count++;
    }

    return 0;
}

string findELetter(int cnt)
{
    string tmp;
    int letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (int i = 0; i < cnt; i++)
    {
        tmp.push_back(letters[i]);
    }
    return tmp;
}