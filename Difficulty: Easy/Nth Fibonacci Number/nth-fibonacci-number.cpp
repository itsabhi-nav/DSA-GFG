//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long find(int n, vector<long long>& dp) {
        if (n <= 1)
            return n;
        
        if (dp[n] != -1)
            return dp[n];
        
        dp[n] = (find(n - 1, dp) + find(n - 2, dp))%1000000007;
        return dp[n];
    }
  
    int nthFibonacci(int n) {
     
        vector<long long> dp(n + 1, -1);
        return find(n, dp) ; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends