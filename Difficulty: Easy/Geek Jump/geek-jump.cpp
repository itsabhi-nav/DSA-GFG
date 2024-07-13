//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
int minimumEnergyHelper(vector<int>& height, int n, vector<int>& dp) {
    if (n == 0) return 0; // Base case: no energy needed to stay at the first stone
    
    if (dp[n] != -1) return dp[n]; // If already calculated, return the stored value
    
    int jumpOneStep = minimumEnergyHelper(height, n - 1, dp) + abs(height[n] - height[n - 1]);
    int jumpTwoSteps = INT_MAX;
    if (n > 1) {
        jumpTwoSteps = minimumEnergyHelper(height, n - 2, dp) + abs(height[n] - height[n - 2]);
    }
    
    dp[n] = min(jumpOneStep, jumpTwoSteps); // Store the result for future reference
    return dp[n];
}

int minimumEnergy(vector<int>& height, int n) {
    vector<int> dp(n, -1); // Initialize dp array with -1
    return minimumEnergyHelper(height, n - 1, dp);
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