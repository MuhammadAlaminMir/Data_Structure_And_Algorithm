/* Binary Practice Problem: 3.
    Problem link: https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#
    Solution: 
   #include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    vector<int> ans(2, -1);
    int lo = std::lower_bound(arr, arr + n, x) -arr; 
    int up = (std::upper_bound(arr, arr + n, x) - arr) - 1; 
    if(lo != n){
    if(arr[lo] == x) {
        ans.clear();
        ans.push_back(lo);
    ans.push_back(up);
        }
        
    }
    return ans;
}

*/