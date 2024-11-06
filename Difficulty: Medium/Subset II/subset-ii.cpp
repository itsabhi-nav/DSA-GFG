//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
   void backtrack(vector<int>& nums, int start, vector<int>& current, vector<vector<int>>& result) {
        // Add the current subset to the result
        result.push_back(current);

        for (int i = start; i < nums.size(); i++) {
            // Skip duplicate elements to avoid duplicate subsets
            if (i > start && nums[i] == nums[i - 1]) continue;

            // Include the current element in the subset
            current.push_back(nums[i]);
            
            // Recursively build subsets including the current element
            backtrack(nums, i + 1, current, result);
            
            // Backtrack: remove the last added element to explore other subsets
            current.pop_back();
        }
    }

    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<vector<int>> result;  // To store the final unique subsets
        vector<int> current;         // To build each subset step by step
        
        // Sort the input array to handle duplicates
        sort(nums.begin(), nums.end());
        
        // Start backtracking from the first element
        backtrack(nums, 0, current, result);
        
        return result;  // Return the list of unique subsets
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends