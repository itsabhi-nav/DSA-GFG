//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    void solve(vector<int> &arr, int i, int n, vector<int> &ans, int sum){
        if(i>=n){
        ans.push_back(sum);
        return;
        }
        //yes
        
        solve(arr, i+1, n,ans, sum+arr[i] );
        
        
        // No
        
        solve(arr, i+1, n,ans, sum);
    }
   
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int>ans;
        solve(arr,0,n,ans,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends