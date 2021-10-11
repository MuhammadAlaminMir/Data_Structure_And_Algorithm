/*  Bit Manipulation Practice Problem: 5.
    Problem link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/
    Solution:
     class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res = 0;
        for(int i = 0; i < 32; i++ ){
            int x = 0, y = 0, z = 0;
            if(a & (1 << i)) x = 1;            
            if(b & (1 << i)) y = 1;
            if(c & (1 << i)) z = 1;
            if(z == 0){
                if(x == 1 && y == 1) res += 2;
                else if(x == 1 || y == 1) res++;
            }
            else if(x == 0 && y == 0) res++;
        }
        return res;
    }
};
*/