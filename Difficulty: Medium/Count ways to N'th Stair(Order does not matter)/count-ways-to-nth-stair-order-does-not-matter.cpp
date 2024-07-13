//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	  int find(int stairs, int n, vector<int>& dp) {
        if (stairs == n) {
            return 1; // Found a valid way to reach the top
        }
        
        if (stairs > n) {
            return 0; // Exceeded the number of stairs
        }
        
        if (dp[stairs] != -1) {
            return dp[stairs];
        }
        
        dp[stairs] = (find(stairs + 1, n, dp) + find(stairs + 2, n, dp));
        return dp[stairs];
    }

public:
    int nthStair(int n) {
        return (n/2)+1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends