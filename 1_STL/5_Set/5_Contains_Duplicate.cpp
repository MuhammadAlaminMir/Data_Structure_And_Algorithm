/* 
    Set Practice Problem: 5.
    Problem link: https://leetcode.com/problems/contains-duplicate/
    Solution:
    class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> ss;
        for(int i = 0; i < nums.size(); i++){
            ss.insert(nums[i]);
        }
        if(ss.size() == nums.size()) return false;
        return true;
    }
};
 */
