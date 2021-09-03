/*  Binary Practice Problem: 5.
    Problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    Solution: 
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        
        for (auto x : grid){
            sort(x.begin(), x.end());
            ans += lower_bound(x.begin(), x.end(), 0) - x.begin();
        }
        return ans;
    }
};

*/