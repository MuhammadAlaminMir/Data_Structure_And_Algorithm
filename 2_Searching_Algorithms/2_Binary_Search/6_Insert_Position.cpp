/*  Binary Practice Problem: 5.
    Problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    Solution: 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        
        
    }
};

*/