/* 
    String Practice Problem: 3.
    Problem link: https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
    Solution:
    class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        int sum = 0;
    string rSum;
    std::vector<int> v;
    while (N > 0)
    {
        v.push_back(N % 10);
        N /= 10;
    }
    for (auto u : v)
        sum += u;
   

    rSum = to_string(sum);
    reverse(rSum.begin(), rSum.end());

    if (to_string(sum) == rSum)
        return 1;
    else
        return 0;
    }
};
 */