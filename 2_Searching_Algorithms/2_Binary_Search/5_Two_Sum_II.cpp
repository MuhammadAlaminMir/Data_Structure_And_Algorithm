/*  Binary Practice Problem: 5.
    Problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    Solution: 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i = 0; i < numbers.size(); i++){
            int tmp = target - numbers[i];
            int res = binary_search(numbers.begin(), numbers.begin() + i, tmp);
            if(res){
                int lo = lower_bound(numbers.begin(), numbers.begin() + i, tmp) - numbers.begin();
                if(lo == i) continue;
               ans.push_back(lo+1);
                ans.push_back(i + 1);
                break;
            }
            
        }
        return ans;
    }
};

*/