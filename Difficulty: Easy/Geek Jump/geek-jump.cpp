//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    
   int step(vector<int>& height, int n, vector<int>& dp) {
    if (n == 1)
        return 0;

    if (dp[n] != -1)
        return dp[n];
    
    int first = step(height, n - 1, dp) + abs(height[n - 1] - height[n - 2]);
    int second = INT_MAX;
    
    if (n > 2) {
        second = step(height, n - 2, dp) + abs(height[n - 1] - height[n - 3]);
    }
    
    dp[n] = min(first, second);
    return dp[n];
}

int minimumEnergy(vector<int>& height, int n) {
    vector<int> dp(n + 1, -1);
    int ans = step(height, n, dp);
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
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends