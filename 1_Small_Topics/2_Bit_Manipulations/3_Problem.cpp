/*  Bit Manipulation Practice Problem: 3.
    Problem link: https://leetcode.com/problems/power-of-two/
    Solution:
    class Solution {
public:
    bool isPowerOfTwo(int n) {
//         cnt total number of set bits into the number.
        if(n <= 0) return false;
        // int cnt = 0;
        // while (n){
        //     cnt++;
        //     n = n & (n -1);
        // }
        // if(cnt == 1) return true;
        //  return false;
        
//         more efficient solution
        if((n & (n-1)) == 0) return true;
         return false;
    }
};
*/
