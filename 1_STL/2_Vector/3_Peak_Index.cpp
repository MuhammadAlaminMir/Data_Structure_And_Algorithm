/* 
    Vector Practice Problem: 2.
    Problem link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
    Solution:
    
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int res = 0, n;
        
        for(int i = 1; i < arr.size(); i++){
            
            
            if(arr[i] > arr[i - 1]){
                res++;
            }
            
        }
        
        return res;
        
    }
};
 */