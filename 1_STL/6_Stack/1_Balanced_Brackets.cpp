/* 
    Stack Practice Problem: 4.
    Problem link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
    Solution:
    class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ss;
        for(int i = 0; i < s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else {
                if(st.top() == s[i]) st.pop();
                else st.push(s[i]);
            }
            }
    
        while(!st.empty()){
             ss.push_back(st.top());
            st.pop();
        }
        int n = ss.size();
          for (int i = 0; i < n / 2; i++)
        swap(ss[i], ss[n - i - 1]);
        return ss;
    }
};
 */
