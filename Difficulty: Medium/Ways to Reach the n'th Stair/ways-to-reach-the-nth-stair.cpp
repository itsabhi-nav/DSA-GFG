//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
     int find(int stairs, int n, vector<int>& dp) {
        const int MOD = 1000000007;

        if (stairs == n) {
            return 1;
        }
        
        if (stairs > n) {
            return 0;
        }
        
        if (dp[stairs] != -1) {
            return dp[stairs];
        }
        
        dp[stairs] = (find(stairs + 1, n, dp) + find(stairs + 2, n, dp)) % MOD;
        return dp[stairs];
    }
    
    int countWays(int n) {
        vector<int> dp(n + 1, -1);
        return find(0, n, dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends