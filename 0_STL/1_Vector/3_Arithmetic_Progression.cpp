/* 
    Vector Practice Problem: 3.
    Problem link: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
    Solution:
    class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff, res;
        std::sort(arr.begin(), arr.end());
    diff = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] != diff)
        {
            res = 0;
            break;
        }
        else
        {
            res = 1;
        }
    }

    return  res ;
    }
};
 */