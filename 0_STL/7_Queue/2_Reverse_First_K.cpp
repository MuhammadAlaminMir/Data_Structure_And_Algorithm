/* 
    Queue Practice Problem: 2.
    Problem link: https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#
    Solution:
    
//User function Template for C++

//Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
   stack<int> st;
   queue<int> qq;
   for(int i = 0; i < k; i++){
       int a = q.front();
       st.push(a);
       q.pop();
   }
while(!st.empty()){
      qq.push(st.top());
      st.pop();
  }  
   
   while(!q.empty()){
       qq.push(q.front());
       q.pop();
   }
   return qq;
}

 */
