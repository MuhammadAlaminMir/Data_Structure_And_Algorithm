/* 
    Map Practice Problem: 1.
    Problem link: https://practice.geeksforgeeks.org/problems/find-the-frequency/1#
    Solution:
    
    int findFrequency(vector<int> v, int x){
   map<long long, int > cnt;
    for(int i = 0; i< v.size();i++){
        cnt[v[i]]++;
    }
    return cnt[x];
}
 */