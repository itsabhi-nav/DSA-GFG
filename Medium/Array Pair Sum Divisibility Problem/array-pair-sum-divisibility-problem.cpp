//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            if (nums[i] % k == 0) {
                continue;
            }
            mp[nums[i] % k]++;
        }

        for (int i = 1; i < k; i++) {  // Fix: Change ((k+1)/2) to (k)
            if (mp[i] != mp[k - i]) {  // Fix: Change == to !=
                return false;
            }
        }
        
        return true;  // Fix: Add a return statement for the case where the loop doesn't return false
    }


};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends