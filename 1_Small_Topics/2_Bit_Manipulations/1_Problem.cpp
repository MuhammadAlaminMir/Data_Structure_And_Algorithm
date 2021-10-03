/*  Bit Manipulation Practice Problem: 1.
    Problem link: https://leetcode.com/problems/number-of-1-bits/
    Solution:
    class Solution {
public:
    int hammingWeight(uint32_t n) {
       int ans = 0;
        while(n > 0){
             ans++;
            n = n & (n-1);
        }
        return ans;
    }
}; 
*/
