/* 
    Stack Practice Problem: 3.
    Problem link: https://leetcode.com/problems/baseball-game/
    Solution:
    class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> v;
        
        for(string u : ops) {
            int n = v.size();
            if(u == "C")
                v.pop();
            else if(u == "D")
            {
                int a = v.top();
                v.push(a * 2);
            }
            else if(u == "+")
            {
                int a = v.top();
                v.pop();
                
                int b = v.top();
                v.push(a);
                v.push(a + b);
            }
            else {
                
                int a= stoi(u);
              
                v.push(a);
            }
        }
        int sum = 0;
       while(!v.empty()){
           int u = v.top();
           v.pop();
           sum += u;
       }
        return sum;
        
    }
};
 */
