/* 
    Stack Practice Problem: 2.
    Problem link: https://www.hackerrank.com/challenges/balanced-brackets/problem
    Solution:
    void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
    return s == n;
}

bool isEmpty(stack<int>& s){
	return s.isEmpty();
}

int pop(stack<int>& s){
	if(s.isEmpty()) return -1;
	int tmp = s.top();
	s.pop();
	return tmp;
}

int getMin(stack<int>& s){
	int res = 1e9;

	while(!s.isEmpty){
	     int t = s.top();
	     res = min(t, res);
	     s.pop();
	     
	}
	return res;
}
 */
