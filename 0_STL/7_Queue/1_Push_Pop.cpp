/* 
    Queue Practice Problem: 1.
    Problem link: https://practice.geeksforgeeks.org/problems/queue-designer/1
    Solution:

//User function Template for C++

queue<int>_push(int arr[],int n)
{
   queue<int> q;
   for(int i = 0; i < n; i++) q.push(arr[i]);
   return q;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty()) {
        cout << s.front() << ' ';
        s.pop();
    }
} 

 */
